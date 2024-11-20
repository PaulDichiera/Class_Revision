#include <iostream>
#include "card.h"

#define LENGTH  7

int main(void){

    Card* deck[LENGTH];

    for(int i = 0; i < LENGTH; i++){
        deck[i] = new Card(i + 1, i + 1);
    }

    for (int i = 0; i < LENGTH; i++){

        std::cout << std::endl;
        std::cout << "Number: " << deck[i]->returnNumber() <<  std::endl;
        std::cout << "Colour Code: " << deck[i]->returnColour() << std::endl;
        std::cout << "Colour: " <<  deck[i]->returnColourStr() << std::endl;
        std::cout << "Rule: " << deck[i]->returnRule() << std::endl;
        std::cout << std::endl;
        
    }
    return EXIT_SUCCESS;
}