#include "Game.h"

Game::Game(){
  numberAttempts = 0;
  correctWord = "";
  playerGuess = "";
  computerGuess = "";
  playerOption = 0;
  endOption  = 0;
  personFlag = false;
  computerFlag = false;
  statFlag = false;
};

Game::~Game(){

};

void Game::startScreen(){

  // Clear the terminal window
  system("clear");

  // Welcome Screen
  cout << "---------------------------------" << endl;
  cout << "        ANGELIQUE & ZANE'S      " << endl;
  cout << "------------ ";
  cout << BOLDGREEN << "WOR" << RESET;
  cout << BOLDWHITE << "DL" << RESET;
  cout << BOLDYELLOW << "E " << RESET;
  cout << "-------------" << endl;
  cout << "               C++              " << endl;
  cout << "---------------------------------" << endl;
  cout << endl;
  cout << "6 ATTEMPTS TO GUESS THE CORRECT 5 LETTER WORD!" << endl;
  cout << endl;

  cout << "ENTER 1: PLAY BY YOUR SELF" << endl;
  cout << "ENTER 2: PLAY AGAINST COMPUTER" << endl;

  cin.clear(); // clear input stream
  cin >> playerOption;
  if (playerOption == 1){
    system("clear");
  } else if (playerOption == 2){
    system("clear");
  } else {
    cout << "INVALID OPTION. RE-ENTER: " << endl;
    cin >> playerOption;
    system("clear");
  }
  cin.clear(); // clear input stream

}

int Game::endScreen(){
  playerStat.setStats(statFlag);

  if (statFlag == 1){
    cout << "YOU WON!" << endl;
  } else if (statFlag == 0){
    cout << "YOU LOSE!" << endl;
  }


  cout << "ENTER 1: PLAY AGAIN" << endl;
  cout << "ENTER 2: SEE PLAYER STATS" << endl;
  cout << "ENTER 0: EXIT GAME" << endl;

  cin >> endOption;

  if (endOption == 0){
    system("clear");
  } else if(endOption == 1){
    gameLoop();
  } else if (endOption == 2){
    system("clear");
    cout << "PLAYER STATS" << endl;
     int n = playerStat.getStats();
      if (n == 1){
        gameLoop();
      } else if (n == 0){
        system("clear");
        return 0;
      }

  } else {
    cout << "INVALID OPTION. RE-ENTER: " << endl;
    cin >> endOption;
    system("clear");
  }

  cin.clear();

  return endOption;
}

void Game::gameLoop(){

  // instantiate objects
  WordPool randomWord;
  CheckWord check;

  // inistialise correct word
  correctWord = randomWord.getRandWord();

  // call start screen function
  startScreen();

  // for testing only //
  cout << "CORRECT WORD: " << correctWord << endl;

  // re-initialised to 0 in case user wants to play again
  numberAttempts = 0;
  personFlag = false;
  computerFlag = false;

  // while loop to end if number of attempts are used or correct word is guessed
  while (personFlag == false && numberAttempts < 6){

    // if-statement for option setting to determine what to instantiate
    if (playerOption == 1){

      // instantiate Person for play by yourself option
      Person p1;
      p1.setGuess();
      playerGuess = p1.getGuess();
      string validGuess = check.validWord(playerGuess);
      personFlag = check.compareWords(validGuess);
      statFlag = personFlag;

      cout << "Attempts Left: " << 5 - (numberAttempts) << endl;

      numberAttempts++;

    } else if (playerOption == 2){

      // instantiate Person & Computer for play against computer option
      Person p1;
      p1.setGuess();
      playerGuess = p1.getGuess();
      string validGuess = check.validWord(playerGuess);
      personFlag = check.compareWords(validGuess);
      statFlag = personFlag;


      Computer c1;
      c1.setGuess();
      computerGuess = c1.getGuess();

      // Compare the guess to the correct word
      computerFlag = check.compareWords(computerGuess);
        //c1.removeGreyLetters(check.returnClue());

      numberAttempts++;


    }



  }

  // call end screen function
  endScreen();


  return;
}
