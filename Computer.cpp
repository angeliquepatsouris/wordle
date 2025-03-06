#include "Computer.h"

Computer::Computer() : Player(){
  computerGuess = new string;
};

Computer::~Computer(){
  delete computerGuess;
}

// function to instantiate the word pool

// function to restrict the word pool

// function to guess from word pool
    /// calling the above two functions

void Computer::setGuess(){

  // instantiating word pool object
  WordPool words;

  // populating the vector of strings with the word list
  computerWords = words.getWordVector();

  // seeding
  rand();

  // generate a random index
  int index = rand() % computerWords.size();

  // random guess
  *computerGuess = computerWords[index];

  cout << "Computer Guess:" << endl;

}

string Computer::getGuess(){
  return * computerGuess;
}

/*
void Computer::removeGreyLetters(char *letters){

  for(int i = computerWords.begin(); i < computerWords.end(); i++){
    string wordPlaceholder = computerWords[i];
    if (letters[i] == computerWords[i]){
      erase.computerWords(word);
    }

  }

}

*/

/*
void Computer::brain(string computerGuess){

  // set up vector of word list
  WordPool words;
  CheckWord guess;
  computerWords = words.getWordVector();

  // get clue

  // remove any words from the vector that don't have any of the same letters

  // remove Words that don't have the right letters in the right positions

  // remove Words that don't have the possible letters from wordlist


}
*/
