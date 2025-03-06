#include "Game.h"
#include "CheckWord.h"
#include <string>
#include <iostream>
using namespace std;

//test to check if compare words function works
int main(void){

  CheckWord CheckWord;
  WordPool WordPool;
  string guess;

  cout << WordPool.getRandWord() << endl;

  cout << "Enter word above: " << endl;
  cin >> guess;

  if (CheckWord.compareWords(guess) != 1) {
      cout << "Test 1 failed!" << endl;
  }

  else {
    cout << "Test 1 success!" << endl;
  }


  return 0;
}
