#include <iostream>
#include "Card.h"
#include "Hand.h"

int main(void){

    // Colour colour = RED;
    // int number = 0;
    // bool fullHand = false;

    // while(!fullHand){
    //     std::cout << "Please input a valid card colour:" << std::endl;
    //     std::cin >> colour; 
    //     std::cout << "Please inpit a valid card number:" << std::endl;
    //     std::cin >> number;

    //     Card* card = new Card(colour, number);
        
    //     hand->addCard(card);

    //     if(hand->getNumCards() == 4){
    //         fullHand = true;
    //     }
    // }

    Card* card1 = new Card(RED, 7);
    Card* card2 = new Card(BLUE, 3);
    Card* card3 = new Card(ORANGE, 5);

    Hand* hand = new Hand();

    hand->addCard(card1);
    hand->addCard(card2);
    hand->addCard(card3);

    for(int i = 0; i < hand->getNumCards(); i++){
        hand->getCard(i);
    }

    Hand* hand2 = hand;


    std::cout << std::endl;
    std::cout << "** Copied Hand **" << std::endl;
    std::cout << std::endl;


    for(int i = 0; i < hand->getNumCards(); i++){
        hand2->getCard(i);
    }
    

    return EXIT_SUCCESS;
}