#include "Movie.h"
#include <iostream>

Movie::Movie(std::string name, std::string rating, int watched)
    : name{name}, rating{rating}, watched{watched} 
{
    std::cout << "Movie constructor called for " << name << std::endl;
}

// Implemention of the copy constructor
Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched} 
{
        std::cout << "Movie copy constructor called for " << source.name << std::endl;
}

// Implementation of the destructor
Movie::~Movie() 
{
    std::cout << "Movie destructor called for " << name << std::endl;
}

// Implementation of the display method
// should just insert the movie attributes to cout
void Movie::display() const
{
    std::cout << name << ", " << rating <<  ", " << watched  <<   std::endl;
}