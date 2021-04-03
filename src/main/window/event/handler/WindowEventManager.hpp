#pragma once

#include <map>
#include <memory>
#include <SFML/Graphics.hpp>

namespace carlos
{
    class WindowEventManager
    {
        public:
            explicit WindowEventManager(sf::RenderWindow& renderWindow);
            bool receive(sf::Event& event);
            void subscribe(sf::Event::EventType type, std::function<void(sf::Event&)> action);
        
            sf::RenderWindow& getBoundWindow() const;
        
        private:
            sf::RenderWindow& renderWindow;

    };
}