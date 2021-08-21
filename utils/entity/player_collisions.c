#include <stdio.h>
#include "raylib.h"
#include "player.h"

void player_collision_detect(Player p){

    if((int) p.position.y + p.p_texture.height / 2 >= GetScreenHeight() || (int) p.position.y + p.p_texture.height / 2 <= 0) {
        DrawText("ok", 0, 5, 10, RED);
    }

}