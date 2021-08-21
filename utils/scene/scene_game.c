#include <stdio.h>
#include "raylib.h"
#include "scene.h"
#include "../entity/player.h"
#include "../main.h"

Player p;

void scene_inGame(){

    p.position = (Vector2) {PLAYER_DEFAULT_POSITION_X, PLAYER_DEFAULT_POSITION_Y};
    p.score = DEFAULT_PLAYER_SCORE;

    //screen init
    SetTargetFPS(60);

    //textures loading
    p.p_texture = player_load_texture(p);

    KeyboardKey key = KEY_UP;
    while (isActive(0))    // Detect window close button or ESC key
    {

        if(IsKeyPressed(KEY_A)) {
            setScene_active(1);
            break;
        }else if(WindowShouldClose() == true){
            UnloadTexture(p.p_texture);
            CloseWindow();
        } 

        p.position.y = player_move(p, key);

        p.position.y = player_physic(p);       

        BeginDrawing();
            ClearBackground(RAYWHITE);

            player_collision_detect(p);
            
            DrawTexture(p.p_texture, p.position.x, p.position.y, WHITE); 
            
        EndDrawing();

        
        
    }
    UnloadTexture(p.p_texture);
    manager();

}