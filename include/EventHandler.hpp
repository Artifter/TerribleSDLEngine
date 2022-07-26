#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "InputHandler.hpp"


class EventHandler
{
public:
std::vector<SDL_Event>& getFrameEvents();
void eventLoop(InputHandler& input);


bool gameRunning = true;

private:
	SDL_Event event;
};