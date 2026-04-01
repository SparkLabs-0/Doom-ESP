#ifndef _constants_h
#define _constants_h

#include <Arduino.h>

// Key pinout
#define USE_INPUT_PULLUP
#define VRX                 4
#define VRY                 3
#define SW                  2

// SNES Controller
// uncomment following line to enable snes controller support
// #define SNES_CONTROLLER
const uint8_t DATA_CLOCK   = 11;
const uint8_t DATA_LATCH   = 12;
const uint8_t DATA_SERIAL  = 13;

// Sound
const uint8_t SOUND_PIN   = 10;

// GFX settings
#define OPTIMIZE_SSD1306
#define FRAME_TIME          33
#define RES_DIVIDER         1
#define Z_RES_DIVIDER       2
#define DISTANCE_MULTIPLIER 12
#define MAX_RENDER_DEPTH    20
#define MAX_SPRITE_DEPTH    12
#define ZBUFFER_SIZE  (SCREEN_WIDTH / Z_RES_DIVIDER + 4)

// Level 
#define LEVEL_WIDTH_BASE    6
#define LEVEL_WIDTH         (1 << LEVEL_WIDTH_BASE)
#define LEVEL_HEIGHT        57
#define LEVEL_SIZE          LEVEL_WIDTH / 2 * LEVEL_HEIGHT

// scenes
#define INTRO                 0
#define GAME_PLAY             1
#define DIFF                  2
#define MUS                   3
#define MID                   4
#define SCORE                 5
// Game
#define GUN_TARGET_POS        18
#define GUN_SHOT_POS          GUN_TARGET_POS + 8

#define ROT_SPEED             .12
#define MOV_SPEED             .1
#define MOV_SPEED_INV         2.5           // 1 / MOV_SPEED

#define JOGGING_SPEED         .005
#define ENEMY_SPEED           .04
#define FIREBALL_SPEED        .2
#define FIREBALL_ANGLES       45          // Num of angles per PI

#define MAX_ENTITIES          12           // Max num of active entities
#define MAX_STATIC_ENTITIES   24          // Max num of entities in sleep mode

#define MAX_ENTITY_DISTANCE   200         // * DISTANCE_MULTIPLIER
#define MAX_ENEMY_VIEW        90          // * DISTANCE_MULTIPLIER
#define ITEM_COLLIDER_DIST    6           // * DISTANCE_MULTIPLIER
#define ENEMY_COLLIDER_DIST   4           // * DISTANCE_MULTIPLIER
#define FIREBALL_COLLIDER_DIST 3          // * DISTANCE_MULTIPLIER
#define ENEMY_MELEE_DIST      9           // * DISTANCE_MULTIPLIER
#define WALL_COLLIDER_DIST    .2

#define ENEMY_MELEE_DAMAGE    18
#define ENEMY_FIREBALL_DAMAGE 25
#define GUN_MAX_DAMAGE        80

// display
constexpr uint8_t SCREEN_WIDTH     =  128;
constexpr uint8_t SCREEN_HEIGHT    =  64;
constexpr uint8_t HALF_WIDTH       =  SCREEN_WIDTH/2;
constexpr uint8_t RENDER_HEIGHT    =  56;         // raycaster working height (the rest is for the hud)
constexpr uint8_t HALF_HEIGHT      =  SCREEN_HEIGHT/2;

#endif
