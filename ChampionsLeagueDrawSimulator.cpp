#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <algorithm>
#include <thread>
#include <chrono>

void draw( std::string teams[], std::size_t num_teams ) ;

int main()
{
    std::cout << "Welcome to the UEFA Champions League quarter finals draw\n"
              << "\nThe draw will include the following teams:\n\n" ;

    const std::size_t NTEAMS = 8 ;
    std::string teams[NTEAMS] =
    {
    "Bayern München (GER)",
    "Borussia Dortmund (GER)",
    "Chelsea (ENG)",
    "Liverpool (ENG)",
    "Manchester City (ENG)",
    "Paris Saint-Germain (FRA)",
    "Porto (POR)",
    "Real Madrid (ESP)"
    };
    
    // http://www.stroustrup.com/C++11FAQ.html#for
    for( const std::string& team_name : teams ) std::cout << '\t' << team_name << '\n' ;

    std::cout << "\nThere are no rules in regards to which team can play who.\n"
              << "Anyone can draw anyone!\n\n"
              << "To start the draw, please press s and enter!\n"
              << "Good luck to all teams!\n\n";

    char start ;
    std::cin >> start;

    if ( (start == 's') || (start == 'S') ) draw( teams, NTEAMS ) ;
    else
    {
        std::cout << "\nInvalid entry! the program will now close!\n"
                  << "Open again and only press s to start the draw!\n" ;
    }
}

void draw( std::string teams[], std::size_t num_teams )
{
    // random number engine, seeded with the current time
    // http://en.cppreference.com/w/cpp/numeric/random
    std::mt19937 rng( std::time(nullptr) ) ;

    // shuffle the teams in the array like we would shuffle a pack of cards
    // http://en.cppreference.com/w/cpp/algorithm/random_shuffle
    // note that std::random_shuffle is deprecated in C++14 and is removed in C++17
    std::shuffle( teams, teams+num_teams, rng ) ;

    // print out the pairings
    for( std::size_t i = 0 ; i < num_teams ; i += 2 )
    {
        // http://en.cppreference.com/w/cpp/thread/sleep_for
        std::this_thread::sleep_for( std::chrono::seconds(1) ) ;
        std::cout << "\n\t" << teams[i] << " vs. " << teams[i+1] << '\n' ;
    }

    // if the number of teams is odd, there would be one unpaired team
    // (the function draw() is generic; we need not hard code for eight teams
    if( num_teams%2 == 1 ) std::cout << "\n\t" << teams[num_teams-1] << " gets a bye\n" ;
}
