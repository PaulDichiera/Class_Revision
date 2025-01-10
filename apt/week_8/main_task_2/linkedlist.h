#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <memory>
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
        std::shared_ptr<Node> head;
};

#endif //LINKEDLIST_H