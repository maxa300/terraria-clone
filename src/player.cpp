#include "tclone.h"
#include <raylib.h>

namespace tclone
{ 
    Player::Player() : playerSpeed(3.0f), jumpStrength(10.0f),
        playerX(GetScreenWidth()/2.0f),
        playerY(GetScreenHeight()/2.0f), pVelocity(0.0f){};

    float Player::getX() { return playerX; }

    float Player::getY() { return playerY; }

    void Player::handleMovement(){
        applyGravity();
        getInput();
    }

    void Player::applyGravity() { pVelocity += 0.2; }

    void Player::getInput(){
        playerY += pVelocity;
        if(IsKeyDown(KEY_D)){
            playerX += playerSpeed;
        }
        if(IsKeyDown(KEY_A)){
            playerX -= playerSpeed;
        }
        if(IsKeyPressed(KEY_SPACE)){
            pVelocity -= 10;
        }
    }
}
