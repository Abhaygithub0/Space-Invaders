#include "../Header/EventService.h"
#include "../Header/GameService.h"
#include "../Header/GraphicService.h"

EventService::EventService()
{
    game_window = nullptr;
}

EventService::~EventService() = default; // Calls the default destructor

void EventService::initialize()
{
    game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
}

void EventService::update()
{
    // Placeholder for future updates
}

void EventService::processEvents()
{
    if (isGameWindowOpen()) {
        while (game_window->pollEvent(game_event)) {
            // Check for window closure
            if (gameWindowWasClosed() || hasQuitGame()) {
                game_window->close();
            }
        }
    }
}

bool EventService::hasQuitGame() const
{
    return isKeyboardEvent() && pressedEscapeKey(); // Only true if the ESC key is pressed and a keyboard event has been registered
}

// Checks if a keyboard key has been pressed
bool EventService::isKeyboardEvent() const
{
    return game_event.type == sf::Event::KeyPressed;
}

// Control click on the SFML functions to see what they do internally
bool EventService::pressedEscapeKey() const
{
    return game_event.key.code == sf::Keyboard::Escape;
}

bool EventService::isGameWindowOpen() const
{
    return game_window != nullptr;
}

bool EventService::gameWindowWasClosed() const
{
    return game_event.type == sf::Event::Closed;
}