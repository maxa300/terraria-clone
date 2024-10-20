
#include "tclone.h"

namespace tclone {
    void init(){
        InitWindow(1920, 1080, "Terraria-Clone");
        SetTargetFPS(60);
    }

    void quit(){
        CloseWindow();
    }
}





