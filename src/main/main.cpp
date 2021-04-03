#include <iostream>

#include "Astro.hpp"

#include <thread>

int main()
{
    std::cout << "Hello there! It's time for physics!!" << std::endl;

    carlos::Astro astroProject;

    astroProject.start();
    
    return EXIT_SUCCESS;
}