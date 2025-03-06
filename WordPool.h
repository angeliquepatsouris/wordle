#ifndef WORDPOOL_H
#define WORDPOOL_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

/*
  Class WordPool
  stores and manages a vector of words from a text file
*/

class WordPool{
  private  :
    // placeholder for the random word 
    string initialWord;

    // stores the random word selected from the vector of words
    string randomWord;

  public :
    // Default Constructor
    WordPool();

    // Default Destructor
    ~WordPool();

    // Returns the vector of words from the word list
    vector<string> getWordVector();

    // reads in from a text file and returns a random word
    string getRandWord();

};
#endif
