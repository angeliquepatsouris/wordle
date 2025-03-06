#include "CheckWord.h"
#include "WordPool.h"
#include <string>
#include <iostream>
using namespace std;

// test to check if only valid words are accepted by the program
// exits program when word is validated

int main(void){

  CheckWord checkword;
  string guess;

  cout << "Enter valid word: " << endl;

  cin>> guess;

  if (checkword.validWord(guess) == guess ){
    cout << "Test 4 passed" << endl;
  }





  return 0;
}
