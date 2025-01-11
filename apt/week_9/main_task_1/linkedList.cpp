#include <iostream>
#include <memory>

#include "linkedList.h"

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::~LinkedList(){
    // clear();
}

int LinkedList::size(std::shared_ptr<Node> node){
    int retVal = 0;
    if(node == nullptr){
        retVal = 0;
    }else{
        retVal = 1 + size(node->next);
    }
    return retVal;
}

int LinkedList::size(){
    return size(head);
}

int LinkedList::get(int index, std::shared_ptr<Node> node, int count){
    if (node == nullptr){
        std::cout << "** Index not in range **" << std::endl;
    }

    if(count == index){
        return node->data;
    }

        return get(index, node->next, count + 1);

}

int LinkedList::get(int index){
    int count = 0;
    return get(index, head, count);
}

void LinkedList::addBack(int data, std::shared_ptr<Node> node){
    if(node->next == nullptr){
        std::shared_ptr<Node> newNode = std::make_shared<Node>(data);
        node->next = newNode;
        std::cout << "** End of list found, Node added **" << std::endl;
    }else{
        addBack(data, node->next);
    }
}

void LinkedList::addBack(int data){
    if(head == nullptr){
        std::shared_ptr<Node> newNode = std::make_shared<Node>(data);
        head = newNode;
        std::cout << "** List Empty, Node added **" << std::endl;
    }else{
        addBack(data, head);
    }
}

void LinkedList::deleteBack(std::shared_ptr<Node> node){
    if(node->next == nullptr){
        node = nullptr;
    }else if(node->next->next == nullptr){
        node->next = nullptr;
    }else{
        deleteBack(node->next);
    }
}

void LinkedList::deleteBack(){
    if(head == nullptr){
        std::cout << "** List Empty, nothing deleted **" << std::endl;
    }else{
        deleteBack(head);
    }
}

