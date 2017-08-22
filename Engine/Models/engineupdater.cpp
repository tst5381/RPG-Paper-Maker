/*
    RPG Paper Maker Copyright (C) 2017 Marie Laporte

    This file is part of RPG Paper Maker.

    RPG Paper Maker is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    RPG Paper Maker is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "engineupdater.h"
#include "projectupdater.h"
#include "wanok.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QUrl>
#include <QJsonDocument>
#include <QDirIterator>

// -------------------------------------------------------
//
//  CONSTRUCTOR / DESTRUCTOR / GET / SET
//
// -------------------------------------------------------

EngineUpdater::EngineUpdater()
{

}

EngineUpdater::~EngineUpdater()
{

}

// -------------------------------------------------------
//
//  INTERMEDIARY FUNCTIONS
//
// -------------------------------------------------------

void EngineUpdater::writeBasicJSONFile() {
    QJsonObject obj, objFile;
    QJsonArray tabScripts;

    // Last version
    obj["lastVersion"] = Project::ENGINE_VERSION;

    // Includes
    getJSONFile(objFile,
                "https://raw.githubusercontent.com/RPG-Paper-Maker/"
                "RPG-Paper-Maker/develop/Game/Content/Datas/Scripts/System/"
                "desktop/includes.js",
                "Content/basic/Content/Datas/Scripts/System/desktop/"
                "includes.js");
    tabScripts.append(objFile);

    // Scripts
    QDirIterator files(Wanok::pathCombine(
                           Wanok::pathCombine(QDir::currentPath(),
                                              Wanok::pathBasic),
                           Wanok::pathScriptsSystemDir),
                       QDir::Files);
    while (files.hasNext()){
        files.next();
        QString name = files.fileName();
        objFile = QJsonObject();
        getJSONFile(objFile,
                    "https://raw.githubusercontent.com/RPG-Paper-Maker/"
                    "RPG-Paper-Maker/develop/Game/Content/Datas/Scripts/System/"
                    + name,
                    "Content/basic/Content/Datas/Scripts/System/" + name);
        tabScripts.append(objFile);
    }
    obj["scripts"] = tabScripts;

    Wanok::writeOtherJSON(Wanok::pathCombine(
                              Wanok::pathCombine(QDir::currentPath(),
                                                 "Content"), "versions.json"),
                          obj, QJsonDocument::Indented);
}

// -------------------------------------------------------

void EngineUpdater::getJSONFile(QJsonObject& obj, QString source,
                                QString target)
{
    obj["source"] = source;
    obj["target"] = target;
}

// -------------------------------------------------------

void EngineUpdater::start() {
    emit needUpdate();
}

// -------------------------------------------------------
//
//  SLOTS
//
// -------------------------------------------------------

void EngineUpdater::check() {
    QNetworkAccessManager manager;
    QNetworkReply *reply;
    QEventLoop loop;
    QString lastVersion;
    int dif;

    // Get the JSON
    reply = manager.get(QNetworkRequest(
        QUrl("https://raw.githubusercontent.com/RPG-Paper-Maker/"
             "RPG-Paper-Maker/master/versions.json")));

    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    m_document = QJsonDocument::fromJson(reply->readAll()).object();

    // Check last version
    lastVersion = m_document["lastVersion"].toString();
    dif = ProjectUpdater:: versionDifferent(lastVersion);

    emit finishedCheck(dif != 0);
}

// -------------------------------------------------------

void EngineUpdater::update() {

    emit finished();
}
