#ifndef MOVE_H
#define MOVE_H

#include "snake.h"
#include "SDL.h"

class Move
{
public:
    Move(SDL_Point* food, Snake* snake);
    ~Move();
    void single_move();
    bool check_align_x();
    bool ckeck_align_y();
private:
    SDL_Point* _food;
    Snake* _snake;

};

#endif