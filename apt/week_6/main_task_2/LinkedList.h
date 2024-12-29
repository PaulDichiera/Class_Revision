#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"

class LinkedList{
    public:
        LinkedList();
        ~LinkedList();

        int size();
        void clear();
        int get(int i);

        void addFront(int data);
        void addBack(int data);

        private:
        Node* head;
};


#endif // LINKEDLIST_H