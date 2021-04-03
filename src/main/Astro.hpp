#pragma once

#include "window/event/handler/WindowEventManager.hpp"

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "logic/event/handler/input/UserInputMapper.hpp"

namespace carlos
{
    class Astro
    {
        public: 
            Astro();

            void start();

        private:
            void astroLoop();

        private:
            sf::RenderWindow                             renderWindow;
            // std::unique_ptr<UserInputMapper>          userInputMapper;
            // std::unique_ptr<WindowEventManager>    windowEventManager;
    };
}