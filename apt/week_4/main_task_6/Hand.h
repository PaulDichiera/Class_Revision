#ifndef HAND_H
#define HAND_H

#include "Card.h"

#define MAX_CARDS   5

class Hand {
    public:
        Hand();
        // Hand(const Hand& other); // Shallow copy
        Hand(const Hand& other); // Deep copy 
        ~Hand();

        void addCard(Card* card);
        int getNumCards();
        Card* getCard(int index);

    private:
        Card* cards[MAX_CARDS];
        int numStored;
};

#endif //HAND_H