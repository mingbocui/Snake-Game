#ifndef STEP_H
#define STEP_H

#include "snake.h"
#include "SDL.h"

class Step
{
public:
    Step(SDL_Point* food, Snake* snake);
    ~Step();
    void single_step();
    bool check_align_x();
    bool ckeck_align_y();
private:
    SDL_Point* _food;
    Snake* _snake;

};

#endif