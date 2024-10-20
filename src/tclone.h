#ifndef TCLONE_H
#define TCLONE_H

#include <raylib.h>
#include <stdio.h>
#include <stdbool.h>

namespace tclone{
  class Player{
    public:
        Player();
        void getInput();
        void applyGravity();
        float getX();
        float getY();
        void handleMovement();
    private:
      float pVelocity;
      float playerSpeed;
      float jumpStrength;
      float playerX;
      float playerY;
  };

  void init();
  void quit();
}


#endif //TCLONE_H 
