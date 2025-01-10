#include <iostream>

#include "node.h"

Node::Node(int data, std::shared_ptr<int> next){
    this->data = data;
    // this->next = next;
}

Node::Node(Node& other){
    data = other.data;
    next = other.next;
}