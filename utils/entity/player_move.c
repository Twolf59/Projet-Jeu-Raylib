#include <stdio.h>
#include "raylib.h"
#include "player.h"

float player_move(Player p, KeyboardKey key_command){

    float pos = p.position.y;
    
    if(IsKeyDown(key_command)){
        pos -= 10.0f;
    }
    
    return pos;
}

float player_physic(Player p){

    float pos = p.position.y;

    pos += 2.0f;
    
    return pos;
}
