#include "tclone.h"
#include "raylib.h"

using namespace tclone;

int main() {
    bool running = true;
    init();
    Player player = Player();

    while (running) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        player.handleMovement();

        //
        DrawCircle((int)player.getX(), (int)player.getY(), 20, BLUE);
        EndDrawing();

        // close with c key
        if(IsKeyPressed(KEY_C)){
            running = false;    
        }
    }

    tclone::quit();
    return 0;
}
