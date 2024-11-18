#include <iostream>
#include "card.h"

int main(void){

    Card Card(3, 3);

    std::cout << "Number: " << Card.returnNumber() <<  std::endl;
    std::cout << "Colour Code: " << Card.returnColour() << std::endl;
    std::cout << "Colour: " <<  Card.returnColourStr() << std::endl;
    std::cout << "Rule: " << Card.returnRule() << std::endl;

    return EXIT_SUCCESS;
}