#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
    public:
        Node(int data, Node* next);
        Node(Node& other);

        int data;
        Node* next;
};

#endif // NODE_H