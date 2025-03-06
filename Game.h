#ifndef GAME_H
#define GAME_H

#include "WordPool.h"
#include "CheckWord.h"
#include "Player.h"
#include "Person.h"
#include "Computer.h"
#include "PlayerMemory.h"
#include <stdlib.h>
#include <ctype.h>

/*
  Game Class
  Manages the game window and game loop
*/

class Game{
  private :
    // will be populated with a random word from WordPool
    string correctWord;

    // the user or computer's guess
    string playerGuess;
    string computerGuess;

    // keeps count of the number of attempts for the game loop
    int numberAttempts;

    // for the start screen function to determine what to do
    int playerOption;

    // for the end screen function to determine what to do
    int endOption;

    // bollean values for each player for the game loop
    bool personFlag;
    bool computerFlag;

    //used to determine if player won to enter into player stats
    bool statFlag;

    //instantiate the object here to be used in multiple functions
    PlayerMemory playerStat;


  public :
    // Game Default Constructor
    Game();

    // Game Default Destructor
    ~Game();

    // Displays and executes player options
    void startScreen();

    // Continues running the game while certain conditions are satisfied
    void gameLoop();

    // returns an int representing the option of the user
    int endScreen();

};
#endif
