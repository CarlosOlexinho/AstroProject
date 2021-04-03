#include <thread>
#include <iostream>

#include "Astro.hpp"

namespace carlos
{
    Astro::Astro()
        :   renderWindow(sf::VideoMode(1600, 1200), "AstroProject")
    {



    }

    void Astro::start()
    {
        renderWindow.setFramerateLimit(15);
        while(renderWindow.isOpen())
        {
            astroLoop();
        }
    }

    void Astro::astroLoop()
    {
        sf::Event event;
        while (renderWindow.pollEvent(event))
        {
            // windowEventManagerPtr -> receive(event);
        }
        renderWindow.clear();
        renderWindow.display();
    }
}