#include <iostream>
#include "Card.h"

int main(void){

    Card* card = new Card(RED, 7);

    std::cout << "Colour as integer: " << card->getColour() << std::endl;
    std::cout << "Colour as string: " << card->colourAsString() << std::endl;
    std::cout << "Card number: " << card->getNumber() << std::endl;
    std::cout << "Rule: " << card->getRule() << std::endl;


    return EXIT_SUCCESS;
}