#include <iostream>
#include "Card.h"

Card::Card(Colour colour, int number){
    this->colour = colour; // its taking the variable passed into the constructor and adding it to the member variable for the object
    this->number = number;
}

Colour Card::getColour(){
    Colour colour = this->colour;
    return colour;
}

int Card::getNumber(){
    int number = this->number;
    return number;
}

std::string Card::getRule(){
    Colour colour = this->colour;
    std::string rule;
    switch(colour) {
        case 0:
            rule = "Highest card wins";
            break;
        case 1:
            rule = "Most of one number wins";
            break;
        case 2:
            rule = "Most of one colour wins";
            break;
        case 3:
            rule = "Most even cards wins";
            break;
        case 4:
            rule = "Most different colours wins";
            break;
        case 5:
            rule = "Most cards in a row wins";
            break;
        case 6:
            rule = "Most cards below 4 wins";
            break;
    }
    return rule;
}

std::string Card::colourAsString(){
    Colour colour = this->colour;
    std::string colourString;

    switch(colour){
        case 0:
            colourString = "RED";
            break;
        case 1:
            colourString = "ORANGE";
            break;
        case 2:
            colourString = "YELLOW";
            break;
        case 3:
            colourString = "GREEN";
            break;
        case 4:
            colourString = "BLUE";
            break;
        case 5:
            colourString = "INDIGO";
            break;
        case 6:
            colourString = "VIOLET";
            break; 
    }
    return colourString;
}