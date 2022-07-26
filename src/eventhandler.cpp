#include "EventHandler.hpp"
#include "GameSettings.hpp"
#include <iostream>


std::vector<SDL_Event>& EventHandler::getFrameEvents()
{
	static std::vector<SDL_Event> frame_events;
	return frame_events;
}


void EventHandler::eventLoop(InputHandler& input)
{
	
	while (SDL_PollEvent(&event))
	{
		getFrameEvents().push_back(event);
		switch(event.type)
		{
			case SDL_QUIT:
				gameRunning = false;
				break;
			case SDL_KEYDOWN:
				input.getPressedKey(event);
			case SDL_KEYUP:
				input.getReleasedKey(event);
				break;
		}
	}
	getFrameEvents().clear();
}