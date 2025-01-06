#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    public:
        LinkedList();
        ~LinkedList();

        int size();
        void clear();
        int get(int index);

        void addFront(int data);
        void addBack(int data);

        void deleteFront();
        void deleteBack();

    private:
        Node* head;
};

#endif //LINKEDLIST_H