#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <memory>

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
            int size(std::shared_ptr<Node> node);
            int get(int index, std::shared_ptr<Node> node, int count);
            void addBack(int data, std::shared_ptr<Node> node);
            void deleteBack(std::shared_ptr<Node> node);
};

#endif // LINKEDLIST_H