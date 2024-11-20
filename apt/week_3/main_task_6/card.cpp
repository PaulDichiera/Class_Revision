#include <iostream>

#include "card.h"

Card::Card(int number, int colour){
    this->number = number;
    this->colour = colour;
}

int Card::returnNumber(){
    int number = this->number;
    
    return number;
}

int Card::returnColour(){
    int colour = this->colour;

    return colour;
}

std::string Card::returnColourStr(){
    int colour = this->colour;
    std::string colourString;

    switch(colour) {
        case 1:
            colourString = "VIOLET";
            break;
        case 2:
            colourString = "INDIGO";
            break;
        case 3:
            colourString = "BLUE";
            break;
        case 4:
            colourString = "GREEN";
            break;
        case 5:
            colourString = "YELLOW";
            break;
        case 6:
            colourString = "ORANGE";
            break;
        case 7:
            colourString = "RED";
            break;
    }
    return colourString;
}

std::string Card::returnRule(){
    int number = this->number;
    std::string rule;

    switch(number) {
        case 1:
            rule = "Most cards below 4 wins";
            break;
        case 2:
            rule = "Most cards in a row wins";
            break;
        case 3:
            rule = "Most different colours wins";
            break;
        case 4:
            rule = "Most even cards wins";
            break;
        case 5:
            rule = "Most of one colour wins";
            break;
        case 6:
            rule = "Most of one number wins";
            break;
        case 7:
            rule = "Highest card wins";
            break;
    }

    return rule;
}