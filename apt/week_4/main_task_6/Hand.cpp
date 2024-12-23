#include <iostream>
#include "Hand.h"

Hand::Hand(){

}

void Hand::addCard(Card* card){
    // new Card(RED, 7);
    // create something that selects a random card

    // we need to add the created card to the cards array
    cards[numStored] = card;
    std::cout << "Card Allocation: " << numStored << " Card Allocated: " << card->colourAsString() << std::endl;
    std::cout << "Calling from cards array: " << cards[numStored]->colourAsString() << std::endl;

    this->numStored += 1;
}

int Hand::getNumCards(){
    int numCards = this->numStored;

    return numCards;
}

// Card* Hand::getCard(int index){
//     cards[index]->colourAsString
//      Needs input from user then calls the appropriate card from the hand and gives all of the details

//     create print out details of card once card index is called.
// }