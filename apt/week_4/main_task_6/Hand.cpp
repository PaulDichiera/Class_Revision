#include <iostream>
#include "Hand.h"

Hand::Hand(){

}

void Hand::addCard(Card* card){
    cards[numStored] = card;
    this->numStored += 1;
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