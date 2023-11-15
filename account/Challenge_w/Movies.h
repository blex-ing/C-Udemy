#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    /* data */
    std::vector<Movie> movies;
public:
    Movies();            // Constructor
    ~Movies();           // Destructor

    // add_movie expects the name of the movie, rating and watched count
    
    /**
     * Checks if a movie with the given name is in the collection.
     * @param name The name of the movie to search for.
     * @return True if the movie is in the collection, false otherwise.
     */
    bool movies_exists(std::string name);
    /**
     * Adds a new movie to the collection.
     * @param name The name of the movie.
     * @param rating The rating of the movie.
     * @param watched The number of times the movie has been watched.
     * @return True if the movie was added successfully, false otherwise.
     */
    bool add_movie(std::string name, std::string rating, int watched);
    /**
     * @brief Increments the number of times a movie has been watched.
     * 
     * @param name The name of the movie to increment the watched count.
     * @return true If the movie was found and the watched count was incremented.
     * @return false If the movie was not found.
     */
    bool increment_watched(std::string name);
    
    /**
     * @brief Displays the movie's title, rating and watched status.
     * 
     * This function displays the movie's title, rating and watched status
     * in the following format:
     * 
     * Title: <title>
     * Rating: <rating>
     * Watched: <watched>
     * 
     * where <title> is the movie's title, <rating> is the movie's rating
     * and <watched> is either "Yes" or "No" depending on whether the movie
     * has been watched or not.
     * 
     * @return void
     */
    void display() const;
};

#endif // _MOVIES_H_