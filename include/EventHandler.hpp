#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "InputHandler.hpp"


class EventHandler
{
public:
EventHandler();

std::vector<SDL_Event>& getFrameEvents();
void eventLoop(InputHandler& input);


private:
	SDL_Event event;

};