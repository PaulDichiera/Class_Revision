#include <iostream>

#include "Node.h"

Node::Node(int data, Node* next){
    this->next = next;
    this->data = data;
}

Node::Node(Node& other){
    data = other.data;
    next = other.next;
}