#ifndef PLAYER_H
#define PLAYER_H
#include <stdio.h>

/* start player */

//define default player position x in start of game
#define PLAYER_DEFAULT_POSITION_X 60.0f
//define default player position y in start of game
#define PLAYER_DEFAULT_POSITION_Y 150.0f

//define default player score in start of game
#define DEFAULT_PLAYER_SCORE 0

typedef struct Player
{
    Vector2 position;
    int score;
    Texture2D p_texture; 
} Player;

#define struct Player

//texture loader for player
Texture2D player_load_texture();
//add score for player
void player_add_score(Player p);

/* end player */

/* start player_move */

//player movement with keybinding
float player_move(Player p, KeyboardKey key_command);

//player gravity
float player_physic(Player p);

/* end player_move */

/* start player_collisions */

void player_collision_detect(Player p);

/* end player_collisions */

#endif