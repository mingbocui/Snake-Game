#include <iostream>
#include "step.h"


// constructor
Step::Step(const SDL_Point* food, const Snake* snake) : _food(food), _snake(snake) { std::cout << "Prepare to move" << std::endl; };
// destructor
Step::~Step(){ std::cout << "Destory Move object" << std::endl; };

bool Step::check_align_x()
{
    return _food->x == static_cast<int>(_snake->head_x);
}
bool Step::check_align_y()
{
    return _food->y == static_cast<int>(_snake->head_y);
}

void Step::single_step()
{
    int curr_head_x = static_cast<int>(_snake->head_x);
    int curr_head_y = static_cast<int>(_snake->head_y);

    // located at food's cell
    if (this->check_align_y() && this->check_align_x()) return;   


    SDL_Event sdlevent;
    // type: press key
    sdlevent.type = SDL_KEYDOWN;

    if (this->check_align_x()) { sdlevent.key.keysym.sym = curr_head_y > _food->y ? SDLK_UP :SDLK_DOWN; }
    if (this->check_align_y()) { sdlevent.key.keysym.sym = curr_head_x > _food->x ? SDLK_LEFT :SDLK_RIGHT; }

    SDL_PushEvent(&sdlevent);

}