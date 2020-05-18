#ifndef STEP_H
#define STEP_H

// #pragma once

#include "snake.h"
#include "SDL.h"

class Step
{
public:
    Step(const SDL_Point* food, const Snake* snake);
    ~Step();
    void single_step();
    bool check_align_x();
    bool check_align_y();

private:
    const SDL_Point* _food;
    const Snake* _snake;
};

#endif