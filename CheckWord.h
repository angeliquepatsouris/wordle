#ifndef CHECKWORD_H
#define CHECKWORD_H

#include "WordPool.h"
#include "Player.h"
#include "Person.h"
#include "Computer.h"
#include "colour.h"
#include <algorithm>
#include <cctype>

/*
  CheckWord Class
  Takes in the user or computer's guess and compares
  it to the correct word.
*/



class CheckWord{
  private :
    string userInput;
    string correctWord;
    WordPool randWord;
    char* clue;
    //int number; 

  public :
    // Default Constructor
    CheckWord();

    // Default Destructor
    ~CheckWord();

    // takes in user input and checks if it is the word list
    string validWord(string userInput);

    // compares the guess and the correct word. outputting a clue
    bool compareWords(string userInput);

    // returns the clue so that computer can have access
    char* returnClue();


};
#endif
