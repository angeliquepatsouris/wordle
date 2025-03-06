#include "Person.h"

Person::Person() : Player(){
  personGuess = new string;
};

void Person::setGuess(){
  cin.clear();
  cout << "Player Guess: " << endl; 
  cin >> *personGuess;
  cin.clear();
}


Person::~Person(){
  delete personGuess;
}

string Person::getGuess(){
  return *personGuess;
}
