#include "step.h"
#include <iostream>

// constructor
Step::Step(SDL_Point* food, Snake* snake) : _food(food), _snake(snake) { std::cout << "Prepare to move" << "\n"; };
// destructor
Step::~Step(){ std::cout << "Destory Move object" << "\n"; };

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
    int curr_head_x = static_cast<int>(snake->head_x);
    int curr_head_y = static_cast<int>(snake->head_y);

    // located at food's cell
    if (check_align_y() && check_align_x()) return;   


    SDL_Event sdlevent;
    // type: press key
    sdlevent.type = SDL_KEYDOWN;

    if (check_align_x()) { sdlevent.key.keysym.sym = curr_head_y > food->y ? SDLK_UP :SDLK_DOWN; }
    if (check_align_y()) { sdlevent.key.keysym.sym = curr_head_x > food->x ? SDLK_LEFT :SDLK_RIGHT; }

    SDL_PushEvent(&sdlevent);

}