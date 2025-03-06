#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

/*
  Player Class
  Abstract Parent Class that acts as a referee between
  Person and Computer, the children classes

*/

class Player{
  protected :
    string guess;


  public :
    // Constructor
    Player();

    // Pure Virtual Destructor
    virtual ~Player();

    // virtual function to be implemented in the child classes
    virtual void setGuess() = 0;

    // virtual function to be implemented in the child classes
    virtual string getGuess() = 0;

};
#endif
