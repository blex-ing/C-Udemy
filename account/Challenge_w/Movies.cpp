#include "Movies.h"
#include <iostream>

// Constructor no args
Movies::Movies()
{}

// Destructor
Movies::~Movies()
{}

// check if movie exists
bool Movies::movies_exists(std::string name)
{
    for(const Movie &movie : movies)
    {
        if(movie.get_name() == name)
            return (true);
    }
    return (false);
}
// add_movie expects the name of the movie, rating and watched count
bool Movies::add_movie(std::string name, std::string rating, int watched)
{
    // Check if movie already exists
    if (movies_exists(name))
        return (false);
    // Movie doesn't exist so we can add it
    // Movie temp {name, rating, watched};
    movies.push_back(Movie(name, rating, watched));
    return (true);
}

bool Movies::increment_watched(std::string name)
{
    for(Movie &movie : movies)
    {
        if(movie.get_name() == name)
        {
            movie.increment_watched();
            return (true);
        }
    }
    return (false);
}

void Movies::display() const
{
    if(movies.size() == 0)
        std::cout << "Sorry, no movies to display.\n";
    else
    {
        std::cout << "\n==============================================" << std::endl;
        for(const Movie &movie : movies)
            movie.display();
        std::cout << "\n==============================================" << std::endl;
    }
}