#ifndef PLAYERMEMORY_H
#define PLAYERMEMORY_H

#include <string>
#include <iostream>

using namespace std;

/*
  PlayerMemory Class
  Takes in and trasnfers the game stats into a text file
  so that the user can access their number of wins
*/

class PlayerMemory{
  private :

    // the win streak which will be increased iff the player wins and reset when they lose
    int winStreak;

    // total wins will be inceased when the player wins
    int totalWins;


  public :
    // Default Constructor
    PlayerMemory();

    // Destructor
    ~PlayerMemory();

    // takes in stats from
    void setStats(bool result);

    // prints out stats
    int getStats();

};
#endif
