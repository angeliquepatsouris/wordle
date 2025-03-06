#include "Game.h"
#include "WordPool.h"
#include <string>
#include <iostream>
using namespace std;

// test to check if wordpool returns a valid random word
int main(void){

    WordPool WordPool;
    string word = WordPool.getRandWord();
    if (word == "") {
        std::cout << "Test 1 failed!" << std::endl;
    }

    return 0;
}
