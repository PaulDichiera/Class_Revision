#ifndef CARD_H
#define CARD_H
#include <iostream>

class Card{ // class and class name

    // methods to create 
    // - Return the cards number
    // - Return the cards colour represented as a number
    // - Return the cards colour as a string 
    // - Return the cards rule as a string
    private:
        int number;
        int colour;
        std::string colourString;
        std::string rule;


    public: // variables or methods from the class that are public

        Card(int number, int colour);

        int returnNumber();
        int returnColour();
        std::string returnColourStr();
        std::string returnRule();
};

#endif //"CARD_H"