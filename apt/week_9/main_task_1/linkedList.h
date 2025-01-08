#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

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

        void addAt(int index, int data);
        void deleteAt(int index);


        private:
            Node* head;
            int size(Node* node);
};

#endif // LINKEDLIST_H