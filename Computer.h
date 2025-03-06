#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "WordPool.h"
#include "CheckWord.h"
#include <vector>

/*
  Computer Class
  Inherits from Player
  Guesses a word from the vector of words and returns this guess
*/

class Computer : public Player{
  private :
    // holds the computer's guess
    string *computerGuess;

    // the string of words the computer can guess from
    vector<string> computerWords;

  public :
    // Constructor
    Computer();

    // randomly selects from the vector word pool as a guess
    void setGuess();

    // returns the computer guess
    string getGuess();

    //void removeGreyLetters(char* letters);

    // restricts the word vector depending on clue
      //void brain(string computerGuess);

    // Destructor
    ~Computer();


};
#endif
