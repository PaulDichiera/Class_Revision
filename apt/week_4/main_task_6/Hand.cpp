#include <iostream>
#include "Hand.h"

Hand::Hand(){

}

// Hand::Hand(const Hand& other){ // Shallow copy
//     numStored = other.numStored;

//     for(int i = 0; i < numStored; i++){
//         cards[i] = other.cards[i];
//     }
// }

Hand::Hand(const Hand& other){ // Deep copy
    numStored = other.numStored;

    for(int i = 0; i < numStored; i++)
        cards[i] = new Card(*other.cards[i]);
}

Hand::~Hand() {
    for(int i = 0; i < numStored; i++){
        delete cards[i]; // we delete the cards array as if we delete the Card object we will have a dangling pointer if we make a shallow copy
    }
}

void Hand::addCard(Card* card){
    if(numStored != MAX_CARDS){
        cards[numStored] = card;
        this->numStored += 1;
    } else {
        std::cout << "** Maximum number of cards reached ** " << std::endl;
    }
}

int Hand::getNumCards(){
    int numCards = this->numStored;

    return numCards;
}

Card* Hand::getCard(int index){

    std::cout << "Card Details:" << std::endl;
    std::cout << "Card colour as string: " << cards[index]->colourAsString() << std::endl;
    std::cout << "Card colout as number: " << cards[index]->getNumber() << std::endl;
    std::cout << "Card number: " << cards[index]->getNumber() << std::endl;
    std::cout << "Card rule: " << cards[index]->getRule() << std::endl; 

    return 0;
}