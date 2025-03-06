#include "Player.h"
#include "Person.h"
#include "Computer.h"
#include "WordPool.h"
#include <string>
#include <iostream>
using namespace std;

// tests to see if accurate computer and person object is created

int main(void){

  Person person;
  Computer computer;

if (person.getGuess() == "" && computer.getGuess() == ""){
  cout << "Person Constructor created!\nComputer Constructor created!" << endl;
}

else {
  cout << "Person Constructor not created \nComputer Constructor not created" << endl;
}







  return 0;
}
