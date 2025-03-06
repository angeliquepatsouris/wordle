#include "WordPool.h"

WordPool::WordPool(){
  initialWord = "";
  randomWord = "";
};


WordPool::~WordPool(){

};

vector<string> WordPool::getWordVector(){

  // open text file
  ifstream inFile;
  inFile.open("words.txt");

  // pre-allocate vector with number of words in text file
  vector<string> wordVector;

  wordVector.reserve(5635);

  // put words from file into vector
  while (inFile >> initialWord)
     wordVector.push_back(initialWord);


  // close the text file
  inFile.close();

  return wordVector;
}

string WordPool::getRandWord(){

  // open text file
  ifstream inFile;
  inFile.open("words.txt");

  // pre-allocate vector with number of words in text file
  vector<string> words;
  words.reserve(5636);

  // put words from file into vector
  while (inFile >> initialWord)
     words.push_back(initialWord);

  // close the text file
  inFile.close();

  // seed random number generator
  srand(time(NULL));

  // generate a random index
  int index = rand() % words.size();

  // random word
  randomWord = words[index];

  return randomWord;
}
