#include <stdio.h>
#include "raylib.h"
#include "scene.h"
#include "../main.h"

void scene_homeMenu(){
    
    while (isActive(1))    // Detect window close button or ESC key
    {
        if(IsKeyPressed(KEY_U)) {
            setScene_active(0);
            break;
        }else if(WindowShouldClose() == true){
            CloseWindow();
        }  

        BeginDrawing();
            ClearBackground(RAYWHITE);


        EndDrawing();  

    }
    manager();
}