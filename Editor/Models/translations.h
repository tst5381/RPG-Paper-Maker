/*
    RPG Paper Maker Copyright (C) 2017-2019 Wano

    RPG Paper Maker engine is under proprietary license.
    This source code is also copyrighted.

    Use Commercial edition for commercial use of your games.
    See RPG Paper Maker EULA here:
        http://rpg-paper-maker.com/index.php/eula.
*/

#ifndef TRANSLATIONS_H
#define TRANSLATIONS_H

#include <QStringList>
#include <QHash>
#include <QDialogButtonBox>

// -------------------------------------------------------
//
//  CLASS Translations
//
//  All the software translations according to "Content/translations" folder.
//
// -------------------------------------------------------

class Translations
{
public:
    static const QString JSON_NAMES;
    static const QString JSON_SHORT;
    static const QString JSON_TRANSLATIONS;
    static const QString OK;
    static const QString CANCEL;
    static const QString NEW_PROJECT;
    static const QString NEW_PROJECT_TOOL;
    static const QString SELECT_A_LOCATION;
    static const QString LOCATION;
    static const QString PROJECT_NAME;
    static const QString DIRECTORY_NAME;
    static const QString AUTO_GENERATE;
    static const QString FILE;
    static const QString EDITION;
    static const QString MANAGEMENT;
    static const QString SPECIAL_ELEMENTS;
    static const QString OPTIONS;
    static const QString DISPLAY;
    static const QString TEST;
    static const QString HELP;
    static const QString OPEN_PROJECT;
    static const QString OPEN_PROJECT_TOOL;
    static const QString BROWSE;
    static const QString SAVE;
    static const QString SAVE_TOOL;
    static const QString SAVE_ALL;
    static const QString SAVE_ALL_TOOL;
    static const QString EXPORT_STANDALONE;
    static const QString CLOSE_PROJECT;
    static const QString QUIT;
    static const QString UNDO;
    static const QString REDO;
    static const QString HEIGHT_UP;
    static const QString HEIGHT_PLUS_UP;
    static const QString HEIGHT_DOWN;
    static const QString HEIGHT_PLUS_DOWN;
    static const QString DATAS_MANAGER;
    static const QString DATAS_MANAGER_TOOL;
    static const QString SYSTEMS_MANAGER;
    static const QString SYSTEMS_MANAGER_TOOL;
    static const QString VARIABLES_MANAGER;
    static const QString VARIABLES_MANAGER_TOOL;
    static const QString COLLISIONS_MANAGER;
    static const QString COLLISIONS_MANAGER_TOOL;
    static const QString KEYBOARD_CONTROLS;
    static const QString KEYBOARD_CONTROLS_TOOL;
    static const QString SCRIPTS_MANAGER;
    static const QString SCRIPTS_MANAGER_TOOL;
    static const QString PICTURES_MANAGER;
    static const QString PICTURES_MANAGER_TOOL;
    static const QString SONGS_MANAGER;
    static const QString SONGS_MANAGER_TOOL;
    static const QString SHAPES_MANAGER;
    static const QString SHAPES_MANAGER_TOOL;
    static const QString AUTOTILES;
    static const QString AUTOTILES_TOOL;
    static const QString ANIMATED_AUTOTILES;
    static const QString ANIMATED_AUTOTILES_TOOL;
    static const QString THREED_OBJECTS;
    static const QString THREED_OBJECTS_TOOL;
    static const QString MOUNTAINS;
    static const QString MOUNTAINS_TOOL;
    static const QString SET_BR_PATH_FOLDER;
    static const QString DEBUG_OPTIONS;
    static const QString GENERAL_OPTIONS;
    static const QString SHOW_HIDE_GRID;
    static const QString SHOW_HIDE_SQUARE_INFORMATION;
    static const QString PLAY;
    static const QString PLAY_TOOL;
    static const QString ABOUT;
    static const QString AUTO_DISPLAY_UPDATER;
    static const QString RECENT_PROJECTS;
    static const QString TILESETS;
    static const QString CHARACTERS;
    static const QString WALLS;
    static const QString WALLS_TOOL;
    static const QString COLLISIONS;
    static const QString NONE;
    static const QString PERFECT;
    static const QString SIMPLIFIED;
    static const QString CUSTOM;
    static const QString DEFAULT;
    static const QString ACCORDING_HEIGHT_ANGLE;
    static const QString FORCE_ALWAYS_COLLIDES;
    static const QString FORCE_NEVER_COLLIDES;
    static const QString SET_MAX;
    static const QString SHOW_TEXT;
    static const QString CHANGE_VARIABLES;
    static const QString END_GAME;
    static const QString WHILE;
    static const QString WHILE_BREAK;
    static const QString INPUT_NUMBER;
    static const QString CONDITION;
    static const QString OPEN_MAIN_MENU;
    static const QString OPEN_SAVES_MENU;
    static const QString MODIFY_INVENTORY;
    static const QString MODIFY_TEAM;
    static const QString START_BATTLE;
    static const QString CHANGE_STATE;
    static const QString SEND_EVENT;
    static const QString TELEPORT_OBJECT;
    static const QString MOVE_OBJECT;
    static const QString WAIT;
    static const QString MOVE_CAMERA;
    static const QString PLAY_MUSIC;
    static const QString STOP_MUSIC;
    static const QString PLAY_BACKGROUND_SOUND;
    static const QString STOP_BACKGROUND_SOUND;
    static const QString PLAY_A_SOUND;
    static const QString PLAY_MUSIC_EFFECT;
    static const QString CHANGE_PROPERTY;
    static const QString DISPLAY_CHOICES;
    static const QString SCRIPT;
    static const QString DISPLAY_A_PICTURE;
    static const QString SET_MOVE_TURN_A_PICTURE;
    static const QString REMOVE_A_PICTURE;
    static const QString SET_DIALOG_BOX_OPTIONS;
    static const QString TITLE_SCREEN;
    static const QString CHANGE_SCREEN_TONE;
    static const QString REMOVE_OBJECT_FROM_MAP;
    static const QString STOP_REACTION;
    static const QString ALLOW_FORBID_SAVES;
    static const QString ALLOW_FORBID_MAIN_MENU;
    static const QString CALL_A_COMMON_REACTION;
    static const QString COMMANDS;
    static const QString STATES;
    static const QString CLASSES;
    static const QString HEROES;
    static const QString MONSTERS;
    static const QString TROOPS;
    static const QString ITEMS;
    static const QString WEAPONS;
    static const QString ARMORS;
    static const QString SKILLS;
    static const QString ANIMATIONS;
    static const QString STATUS;
    static const QString MONSTERS_LIST;
    static const QString PICTURE;
    static const QString POSITION;
    static const QString FRAMES;
    static const QString GRAPHICS;
    static const QString SOUND_EFFECTS_FLASHS;
    static const QString CHANGE_BATTLER;
    static const QString COPY_FRAMES;
    static const QString CLEAR_FRAMES;
    static const QString CREATE_TRANSITION;
    static const QString APPLY_TEXTURE;
    static const QString PLAY_HIT;
    static const QString PLAY_MISS;
    static const QString PLAY_CRIT;
    static const QString ROWS;
    static const QString COLUMNS;
    static const QString CHOOSE;
    static const QString SHOW_COLLISIONS_BB;
    static const QString TYPE_EXPORT;
    static const QString DEPLOY_DESKTOP;
    static const QString OS;
    static const QString PROTECT_DATAS;
    static const QString DEPLOY_WEB;
    static const QString VERSION;
    static const QString MAJOR;
    static const QString MINOR;
    static const QString FIRST_LAUNCH_1;
    static const QString FIRST_LAUNCH_2;
    static const QString FIRST_LAUNCH_3;
    static const QString FIRST_LAUNCH_4;
    static const QString FIRST_LAUNCH_5;
    static const QString FIRST_LAUNCH_6;
    static const QString HERE;
    static const QString THEME;
    static const QString NEED_RESTART;
    static const QString DARK;
    static const QString WHITE;
    static const QString ENGINE_CONTROLS;
    static const QString GAME_CONTROLS;
    static const QString MENU_CONTROLS;
    static const QString ACTION;
    static const QString UP;
    static const QString DOWN;
    static const QString LEFT;
    static const QString RIGHT;
    static const QString AUTO;
    static const QString NAME;
    static const QString LENGTH;
    static const QString WIDTH;
    static const QString HEIGHT;
    static const QString DEPTH;
    static const QString MUSIC;
    static const QString BACKGROUND_SOUND;
    static const QString CAMERA_PROP;
    static const QString SKY;
    static const QString COLOR;
    static const QString SKYBOX;
    static const QString MAP_STARTUP_REACTIONS;
    static const QString BATTLES;
    static const QString WELCOME_FIRST_LAUNCH;
    static const QString CHOOSE_LOCATION;
    static const QString MAP_PROPERTIES;
    static const QString OBJECT;
    static const QString SELECT_PICTURE;
    static const QString SELECT_RECT;
    static const QString X;
    static const QString Y;
    static const QString PX;
    static const QString SELECT_MAP_POSITION;
    static const QString SET_MAXIMUM;
    static const QString MAXIMUM;
    static const QString SELECT_SHAPE;
    static const QString SYSTEM;
    static const QString GAME_NAME;
    static const QString GAME_NATIVE_RESOLUTION;
    static const QString DISPLAY_CONSOLE;
    static const QString SQUARE_SIZE;
    static const QString IN_PX;
    static const QString RAY_PORTIONS;
    static const QString EDITOR;
    static const QString INGAME;
    static const QString MOUNTAIN_COLLISION_HEIGHT_LIMIT_1;
    static const QString MOUNTAIN_COLLISION_HEIGHT_LIMIT_2;
    static const QString MOUNTAIN_COLLISION_ANGLE_LIMIT_1;
    static const QString MOUNTAIN_COLLISION_ANGLE_LIMIT_2;
    static const QString ANIMATION_FRAMES;
    static const QString GLOBAL_SOUNDS;
    static const QString CURSOR;
    static const QString CONFIRMATION;
    static const QString IMPOSSIBLE;
    static const QString OTHER_OPTIONS;
    static const QString DEFAULT_DIALOG_BOX_OPTIONS;
    static const QString SELECT;
    static const QString MAX_NUMBER_SAVE_SLOTS;
    static const QString PRICE_SOLD_ITEM;
    static const QString OF_DEFAULT_PRICE;
    static const QString FONT_SIZES;
    static const QString FONT_NAMES;
    static const QString COLORS;
    static const QString WINDOW_SKINS;
    static const QString CURRENCIES;
    static const QString SPEEDS;
    static const QString DETECTIONS;
    static const QString CAMERA_PROPERTIES;
    static const QString FREQUENCIES;
    static const QString STATISTIC_ASSOCIATED_LEVEL;
    static const QString STATISTIC_ASSOCIATED_EXP;
    static const QString FORMULAS;
    static const QString IS_DEAD;
    static const QString CRITICAL_INFLUENCE;
    static const QString MUSICS;
    static const QString BATTLE;
    static const QString LEVEL_UP;
    static const QString VICTORY;
    static const QString BATTLE_MAPS;
    static const QString ELEMENTS;
    static const QString COMMON_STATISTICS;
    static const QString WEAPONS_KIND;
    static const QString COMMON_BATTLE_COMMANDS;
    static const QString COMMON_EQUIPMENTS;
    static const QString ARMORS_KIND;
    static const QString BACKGROUND;
    static const QString IMAGE;
    static const QString VIDEO;
    static const QString MENU_COMMANDS;
    static const QString SETTINGS_CONFIGURATION;
    static const QString ITEMS_TYPES;
    static const QString EVENTS;
    static const QString PARAMETERS;
    static const QString BATTLE_SYSTEM;
    static const QString TITLE_SCREEN_GAME_OVER;
    static const QString MAIN_MENU;
    static const QString EVENTS_STATES;
    static const QString COMMON_REACTIONS;
    static const QString BLOCK_HERO_WHEN_REACTION;
    static const QString MODELS;
    static const QString SELECT_TILESET_RECT;
    static const QString VARIABLES;
    static const QString SELECT_VIDEO;
    static const QString FROM;
    static const QString TO;
    static const QString FRAMES_TO_COPY;
    static const QString PASTE_FROM_FRAME;
    static const QString ELEMENTS_INDEX;
    static const QString ZOOM;
    static const QString ANGLE;
    static const QString OPACITY;
    static const QString ALLOW;
    static const QString COMMON_REACTION;
    static const QString PARAMETER_VALUES;
    static const QString SELECTION;
    static const QString PROPERTY_ID;
    static const QString OPERATION;
    static const QString VALUE;
    static const QString NEW_VALUE;
    static const QString EQUALS;
    static const QString PLUS;
    static const QString MINUS;
    static const QString TIMES;
    static const QString DIVIDED_BY;
    static const QString MODULO;
    static const QString RED;
    static const QString GREEN;
    static const QString BLUE;
    static const QString GREY;
    static const QString ADDING_COLOR_ID;
    static const QString WAIT_END_CHANGE_BEFORE_NEXT_COMMAND;
    static const QString TIME;
    static const QString SECONDS;
    static const QString STATE_ID;
    static const QString REPLACE;
    static const QString ADD;
    static const QString REMOVE;
    static const QString ONE_VARIABLE;
    static const QString RANGE;
    static const QString TO_SMALL;
    static const QString NUMBER;
    static const QString RANDOM_NUMBER;
    static const QString MESSAGE;
    static const QString SWITCH;
    static const QString AN_OBJECT_IN_MAP;
    static const QString VARIABLES_PARAM_PROP;
    static const QString POSSESSIONS;
    static const QString OTHERS;
    static const QString THIS;
    static const QString IS;
    static const QString ADD_ELSE_CONDITIONS_NOT_APPLY;
    static const QString HERO_MAYBE_MORE;
    static const QString IN;
    static const QString ARE_NAMED;
    static const QString ARE_IN;
    static const QString ARE_ABLE_SKILL_ID;
    static const QString ARE_EQUIPED_WITH;
    static const QString WEAPON_ID;
    static const QString ARMOR_ID;
    static const QString ARE_UNDER_EFFECT_STATUS_ID;
    static const QString HAVE_STATISTIC_ID;
    static const QString CURRENCY_ID;
    static const QString ITEM_ID;
    static const QString NUMBER_IN_INVENTORY_IS;
    static const QString CHECK_WEAPONS_EQUIPED_TOO;
    static const QString CHECK_ARMORS_EQUIPED_TOO;
    static const QString KEY_ID;
    static const QString IMAGE_ID;
    static const QString INDEX;
    static const QString ORIGIN;
    static const QString COORDINATES;
    static const QString EFFECTS;
    static const QString CHOICES;
    static const QString CANCEL_AUTO_INDEX;
    static const QString VARIABLE_ASSIGNMENT;
    static const QString CREATE_NEW_INSTANCE_WITH_LEVEL;
    static const QString HERO;
    static const QString MONSTER_ID;
    static const QString OF;
    static const QString STOCK_INSTANCE_ID_IN;
    static const QString CAMERA_TARGET;
    static const QString UNCHANGED;
    static const QString OBJECT_ID;
    static const QString MOVE;
    static const QString TARGET_OFFSET;
    static const QString TAKE_ACCOUNT_CAMERA_ORIENTATION;
    static const QString Z;
    static const QString ROTATION;
    static const QString HORIZONTAL;
    static const QString VERTICAL;
    static const QString DISTANCE;
    static const QString WAIT_END_MOVE_BEFORE_NEXT_COMMAND;
    static const QString IGNORE_IF_IMPOSSIBLE;
    static const QString WAIT_END_MOVES;
    static const QString WITH_CAMERA_ORIENTATION;
    static const QString MOVES;
    static const QString STEP_SQUARE_MOVES;
    static const QString ONE_TO_NORTH;
    static const QString ONE_TO_SOUTH;
    static const QString ONE_TO_WEST;
    static const QString ONE_TO_EAST;
    static const QString ONE_TO_NORTH_WEST;
    static const QString ONE_TO_NORTH_EAST;
    static const QString ONE_TO_SOUTH_WEST;
    static const QString ONE_TO_SOUTH_EAST;
    static const QString ONE_TO_RANDOME;
    static const QString ONE_TO_HERO;
    static const QString ONE_OPPOSITE_TO_HERO;
    static const QString ONE_IN_FRONT;
    static const QString ONE_BACK;
    static const QString CHANGE_DIRECTION;
    static const QString CHANGE_OBJECT_PROPERTIES;
    static const QString SELECT_SONG_ID;
    static const QString IMAGE_INDEX;
    static const QString USE_DYNAMIC;
    static const QString TARGET;
    static const QString ALL;
    static const QString DETECTION_ID;
    static const QString SENDER_CANT_RECEIVE;
    static const QString WINDOW_SKIN_ID;
    static const QString TRANSFORM;
    static const QString PADDING;
    static const QString FACESET;
    static const QString TEXT;
    static const QString OUTLINE;
    static const QString COLOR_ID;
    static const QString SIZE_ID;
    static const QString FONT_ID;
    static const QString SET;
    static const QString MOVE_VERB;
    static const QString TURN_VERB;
    static const QString WAIT_END_ACTIONS_BEFORE_NEXT_COMMAND;
    static const QString INTERLOCUTOR;
    static const QString FONT_SIZE;
    static const QString FONT_NAME;
    static const QString TEXT_COLOR;
    static const QString BACK_COLOR;
    static const QString OUTLINE_COLOR;
    static const QString VARIABLE;
    static const QString PARAMETER;
    static const QString PROPERTY;
    static const QString HERO_NAME;
    static const QString ICON;
    static const QString TROOP_ID;
    static const QString ID;
    static const QString RANDOM;
    static const QString IN_MAP_PROPERTY;
    static const QString BATTLE_MAP;
    static const QString MAP_ID;
    static const QString Y_PLUS;
    static const QString ALLOW_ESCAPE;
    static const QString DEFEAT_CAUSES_GAME_OVER;
    static const QString TRANSITION;
    static const QString START;
    static const QString END;
    static const QString DISAPPEAR_WITH_TIME;
    static const QString DIRECTION;
    static const QString SHADING_BEFORE;
    static const QString SHADING_AFTER;
    static const QString FOR_TILESET;
    static const QString COMPLETE_LIST;
    static const QString SHAPE;
    static const QString MTL;
    static const QString TEXTURE;
    static const QString SCALE;
    static const QString SIZE;
    static const QString SQUARE_S;
    static const QString PIXEL_S;
    static const QString SET_ANIMATION_EFFECT;
    static const QString SOUND_EFFECT;
    static const QString FLASH;
    static const QString EDIT;
    static const QString EDIT_ANIMATION_ELEMENT;
    static const QString FLIP_VERTICALY;
    static const QString SET_BATTLE_COMMAND;
    static const QString SKILL_ID;
    static const QString SET_BATTLE_MAP;
    static const QString CAMERA_PROPERTIES_ID;
    static const QString SET_CAMERA_PROPERTIES;
    static const QString HORIZONTAL_ANGLE;
    static const QString VERTICAL_ANGLE;
    static const QString FIELD_OF_VIEW;
    static const QString NEAR;
    static const QString FAR;
    static const QString SET_CHARACTERISTIC;
    static const QString BUFF;
    static const QString CHARACTER_SPECIFIC;
    static const QString OTHER;
    static const QString SET_SKILL_LEARN;
    static const QString LEVEL;
    static const QString SET_COLOR;
    static const QString CHANGE_COLOR;
    static const QString SET_COST;
    static const QString APPLY_COST_ON;
    static const QString WITH_VALUE;
    static const QString SET_PARAMETER;
    static const QString DEFAULT_VALUE;
    static const QString SET_CURRENCY;
    static const QString SET_DETECTION;
    static const QString FIELD;
    static const QString TOP;
    static const QString BOT;
    static const QString NEW_BOX_HEIGHT;
    static const QString BIG_SQUARE_S;
    static const QString BIG_PIXEL_S;
    static const QString AUTOMATIC;
    static const QString RADIUS;
    static const QString GENERATE;
    static const QString DETECTION_DESCRIPTION;
    static const QString SET_EFFECT;
    static const QString DAMAGES_ON;
    static const QString WITH_FORMULA;
    static const QString MINIMUM;
    static const QString ELEMENT_ID;
    static const QString VARIANCE;
    static const QString CRITICAL;
    static const QString PRECISION;
    static const QString SPECIAL_ACTION;
    static const QString SET_ELEMENT;
    static const QString EFFICIENCY;
    static const QString SET_FONT_NAME;
    static const QString FONT;
    static const QString SET_FONT_SIZE;
    static const QString SET_SHORTCUTS;
    static const QString REMOVE_LAST;
    static const QString REMOVE_ALL;
    static const QString SET_KEYBOARD;
    static const QString ABBREVIATION_JS;
    static const QString DESCRIPTION;
    static const QString SHORTCUT;
    static const QString CHANGE;
    static const QString SET_NAME;
    static const QString SET_LOOT;
    static const QString PROBABILITY;
    static const QString LEVEL_BETWEEN;
    static const QString AND;
    static const QString LOOT;
    static const QString SET_MONSTER_TROOP;
    static const QString SET_EVENT;
    static const QString SET_PARAMETER_VALUE;
    static const QString SET_PROPERTY;
    static const QString INITIAL_VALUE;
    static const QString SELECT_A_STATE;
    static const QString UPDATE_COMPLETE_LIST;
    static const QString SET_STATISTIC;
    static const QString SCRIPT_ABBREVIATION;
    static const QString PROPERTIES;
    static const QString FIX;
    static const QString BAR;
    static const QString SET_STATISTIC_PROGRESSION;
    static const QString INFORMATION;
    static const QString STATISTIC_ID;
    static const QString MAXIMUM_VALUE;
    static const QString RANDOM_VARIATION;
    static const QString FORMULA;
    static const QString SET_TITLE_COMMAND;
    static const QString TYPE_OF_COMMAND;
    static const QString SET_KIND;
    static const QString SET_WINDOW_SKIN;
    static const QString SIDE_BORDERS;
    static const QString BORDERS;
    static const QString ARROWS;
    static const QString TEXTS;
    static const QString CLASS;
    static const QString BATTLER;
    static const QString EXPERIENCE;
    static const QString TO_NEXT_LEVEL;
    static const QString TOTAL;
    static const QString INITIAL_LEVEL;
    static const QString BASE;
    static const QString MAX_LEVEL;
    static const QString INFLATION;
    static const QString RESET;
    static const QString SET_TO_CLASS_VALUES;
    static const QString CHARACTERISTICS;
    static const QString STATISTICS_PROGRESSION;
    static const QString SKILLS_TO_LEARN;
    static const QString TYPE;
    static const QString CONSOMABLE;
    static const QString ONE_HAND;
    static const QString CONDITION_FORMULA;
    static const QString TARGET_CONDITIONS_FORMULA;
    static const QString AVAILABLE;
    static const QString SOUND_MAIN_MENU;
    static const QString USER_ANIMATION_ID;
    static const QString TARGET_ANIMATION_ID;
    static const QString PRICE;
    static const QString COSTS;
    static const QString REWARDS;
    static const QString LOOTS;
    static const QString ACTIONS;
    static const QString ONLY_ONE_EVENT_PER_FRAME;
    static const QString DETECTION;
    static const QString MOVING;
    static const QString EDIT_ROUTE;
    static const QString SPEED;
    static const QString FREQ;
    static const QString MOVE_ANIMATION;
    static const QString THOUGH;
    static const QString STOP_ANIMATION;
    static const QString SET_WITH_CAMERA;
    static const QString CLIMB_ANIMATION;
    static const QString PIXEL_OFFSET;
    static const QString DIRECTION_FIX;
    static const QString KEEP_POSITION;
    static const QString EVENT_SYSTEM;
    static const QString EVENT_USER;
    static const QString SHOW_AVAILABLE_CONTENT;
    static const QString REFRESH;
    static const QString TABLE;
    static const QString GRAPH;
    static const QString VOLUME;
    static const QString APPLY_ON_LEFT_RIGHT_CLICK;
    static const QString UPDATE_LIST;
    static const QString SELECTED_OBJECT;
    static const QString FLOOR;
    static const QString AUTOTILE;
    static const QString ANIMATED_AUTOTILE;
    static const QString FACE_SPRITE;
    static const QString FIX_SPRITE;
    static const QString DOUBLE_SPRITE;
    static const QString QUADRA_SPRITE;
    static const QString WALL;
    static const QString MOUNTAIN;
    static const QString THREED_OBJECT;
    static const QString TOP_FLOOR;
    static const QString BORDER_WIDTH;
    static const QString ENTER;
    static const QString SLOW;
    static const QString LINEAR;
    static const QString FAST;
    static const QString PRATICABLE;
    static const QString DIRECTIONS;
    static const QString REPEAT;
    static const QString STATISTIC;
    static const QString CURRENCY;
    static const QString APPLY_WEAPON_EFFECTS;
    static const QString OPEN_SKILLS_CHOICE;
    static const QString OPEN_ITEMS_CHOICE;
    static const QString ESCAPE;
    static const QString END_TURN;
    static const QString STATISTIC_VALUE;
    static const QString ELEMENT_RESISTANCE;
    static const QString STATUS_RESISTANCE;
    static const QString EXPERIENCE_GAIN;
    static const QString CURRENCY_GAIN;
    static const QString SKILL_COST;
    static const QString TEAM;
    static const QString RESERVE;
    static const QString HIDDEN;
    static const QString EQUAL_TO;
    static const QString NOT_EQUAL_TO;
    static const QString GREATER_THAN_OR_EQUAL_TO;
    static const QString LESSER_THAN_OR_EQUAL_TO;
    static const QString GREATER_THAN;
    static const QString LESSER_THAN;
    static const QString KEYBOARD_ASSIGNMENTS;
    static const QString ALL_HEROES;
    static const QString NONE_OF_HEROES;
    static const QString AT_LEAST_ONE_HERO;
    static const QString HERO_WITH_INSTANCE_ID;
    static const QString X_SQUARE_POSITION;
    static const QString Y_SQUARE_POSITION;
    static const QString Z_SQUARE_POSITION;
    static const QString X_PIXEL_POSITION;
    static const QString Y_PIXEL_POSITION;
    static const QString Z_PIXEL_POSITION;
    static const QString ORIENTATION;
    static const QString MIDDLE;
    static const QString BOTTOM;
    static const QString SCREEN_CENTER;
    static const QString HIT;
    static const QString MISS;

    Translations();
    virtual ~Translations();

    void read();
    void readLanguages();
    void readTranslations();
    QString get(const QString &key);
    void translateButtonBox(QDialogButtonBox *buttonBox);

protected:
    QString m_currentLanguage;
    QStringList m_languagesNames;
    QStringList m_languagesShort;
    QHash<QString, QString> m_translations;
};

#endif // TRANSLATIONS_H
