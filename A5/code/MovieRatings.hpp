/**
 * MovieRatings.hpp
 *
 * Copyright 2018 Andrew Hughes (ahughes6@buffalo.edu)
 *
 * This work is licensed under the Creative Commons 
 * Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-sa/4.0/.
 *
 */

#ifndef _MOVIERATINGS_HPP_
#define _MOVIERATINGS_HPP_

#include <vector>
#include <string>
#include <set>
#include <map>
struct Movie {
    // Must at least contain movieId, imdbId, tmdbId.
    // DO NOT CHANGE/MOVE/REMOVE THESE FIELDS.
    size_t movieId;
    size_t imdbId;
    size_t tmdbId;
    std::string title;
    // You may add here.
    
};

struct User {
    // Must at least contain userId.
    // DO NOT CHANGE/MOVE/REMOVE THESE FIELDS.
    size_t userId;
    // You may add here.
    
};

struct Rating {
    // Must at least contain userId.
    // DO NOT CHANGE/MOVE/REMOVE THESE FIELDS.
    size_t userId;
    size_t movieId;
    double rating;
    // You may add here.
    
};

class MovieRatings {
private:
    std::map<size_t, std::pair<double, int>> movieData;//size_t is the movie id while the double ist the avg rating and int is the number of ratings
    
public:

    
    void addMovie(const Movie& movie){
        std::pair<double, int> ratings;
        ratings.first = -1; ratings.second = 0;
        std::pair<size_t, std::pair<double, int>> tmp;
        
     
        tmp.first = movie.movieId; 
        tmp.second = ratings; 
        movieData.insert( tmp);
            
    }
    void addUser(const User& user){
        
    }
    void addRating(const Rating& rate){
        auto it = movieData.find(rate.movieId);
        if(it !=movieData.end()){
           // ((it->second).second)++;//increase num of ratings
            double avg =( (((it->second).first * (it->second).second)+ rate.rating) )   /   ((++(it->second).second ));
            (it->second).first =  (it->second).first == -1? rate.rating: avg;
          
        }else{
            std::pair<double, int> tmpRatings;
            tmpRatings.first = rate.rating; tmpRatings.second = 0;
            std::pair<size_t, std::pair<double, int>> tmp;
        
     
            tmp.first = rate.movieId; 
            tmp.second = tmpRatings; 
            movieData.insert( tmp);
        }
    }
    std::map<double, size_t> sortRatings(){
        std::map<double, size_t> tmp;
        for( std::pair<size_t, std::pair<double, int>> it: movieData){
            std::pair<double,size_t> tmp;  tmp.first= (it.second).first; tmp.second = it.first;
        }
    }
    std::vector<size_t> getTopMovies(size_t k){
        std::vector<size_t> stuff;
        return stuff;
    }
    std::vector<size_t> getFavoriteMovies(const User&, size_t k){
        std::vector<size_t> stuff;
        return stuff;
    }
    User getMVP(){
        return;
    }
    
    //Bonus:
    //void removeUser(User);
    //void removeMovie(Movie);
};
#endif //_MOVIERATINGS_HPP_
