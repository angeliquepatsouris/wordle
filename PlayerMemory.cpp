#include "PlayerMemory.h"

PlayerMemory::PlayerMemory(){
  winStreak = 0;
  totalWins = 0;

}

PlayerMemory::~PlayerMemory(){

}


void PlayerMemory::setStats(bool result){

  if (result == 0){
    winStreak = 0;
  } else if (result == 1){
    winStreak++;
    totalWins++;
  }

}

int PlayerMemory::getStats(){
  cout << endl;

  cout << "WIN STREAK: " << winStreak << endl;
  cout << "TOTAL WINS: " << totalWins << endl;

  cout << "---------------------------" << endl;

  cout << "ENTER 1: RETURN TO GAME" << endl;
  cout << "ENTER 0: EXIT GAME" << endl;


  int option;

  cin >> option;

  return option;

}
