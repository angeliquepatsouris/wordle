#include "CheckWord.h"


CheckWord::CheckWord(){
  correctWord = randWord.getRandWord();
  clue = new char;
};

CheckWord::~CheckWord(){
  delete [] clue;
};


string CheckWord::validWord(string userInput){

  vector<string> wordVector = randWord.getWordVector();

  for (;;){
    if ( std::find(wordVector.begin(), wordVector.end(), userInput) != wordVector.end() ){
      break;
    } else {
      cin.clear();
      cout << "INVALID WORD. RE-ENTER: " << endl;
      cin.clear();
      cin >> userInput;
    }

  }

  return userInput;
}


bool CheckWord::compareWords(string userInput){

  // change to struct //
  for (int i = 0; i < 5; i++){
    clue[i] = '-';
  }
  //clue = {'-', '-', '-', '-', '-'};
  bool answerFlags[5] = {false, false, false, false, false};

  // first pass to check if word matches exactly
  for (int i = 0; i < 5; i++){
    if (userInput[i] == correctWord[i]){
      clue[i] = 'G';
      answerFlags[i] = true;
    }
  }

  // second pass to check correct letter in wrong place
  for (int i = 0; i < 5; i++){
    if (clue[i] == '-'){
      for (int j = 0; j < 5; j++){
        if (userInput[i] == correctWord[j] && !answerFlags[j]){
          clue[i] = 'Y';
          answerFlags[j] = true;
          break;
        }
      }
    }
  }

   // colour output
   for (int i = 0; i < 5; i++){

     if(clue[i] == 'G'){
       cout << BOLDGREEN << userInput[i] << RESET ;
     } else if (clue[i] == 'Y'){
       cout << BOLDYELLOW << userInput[i] << RESET;
     } else {
       cout << BOLDWHITE << userInput[i] << RESET;
     }

   }

   cout << endl;
   cout << endl;

   return strcmp(clue, "GGGGG") == 0; // if match strmcp return 0
}

char* CheckWord::returnClue(){
  return clue;
}
