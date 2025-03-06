#ifndef PERSON_H
#define PERSON_H

#include "Player.h"

/*
  Person Class
  Inherits from Player
  Allows for the user to input a guess and returns this guess
*/

class Person : public Player{
  private :
    // holds the person's guess
    string * personGuess;

  public :
    // Default Constructor
    Person();

    // prompts and gets the user's guess
    void setGuess();

    // returns the guess so it can be used in CheckWord
    string getGuess();

    // Destructor
    ~Person();

};
#endif
