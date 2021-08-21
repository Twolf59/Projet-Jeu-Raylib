#include "raylib.h"
#include "utils/entity/player.h"
#include "utils/scene/scene.h"
#include <stdio.h>
#include "utils/main.h"

#define SCREEN_SIZE_HEIGHT 450
#define SCREEN_SIZE_WIDTH 800

void manager();
void setScene_active(int scene);
bool isActive();

int scene_active;

int main() 
{
    //window init
    InitWindow(SCREEN_SIZE_WIDTH, SCREEN_SIZE_HEIGHT, "game");
    
    // Main game loop

    manager(0);

    return 0;
}

void manager() {

    switch (scene_active)
    {
        case 0:
            setScene_active(0);
            scene_inGame();
            break;

        case 1:
            setScene_active(1);
            scene_homeMenu();
            break;
    }
}

bool isActive(int scene){
    bool active;

    if(scene_active == scene){
        active = true;
    }else{
        active = false;
    }

    return active;
}

void setScene_active(int scene){
    scene_active = scene;
}