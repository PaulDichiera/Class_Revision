#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::~LinkedList(){
    clear();
}

int LinkedList::size(){
    int count = 0;
    if(head != nullptr){
        Node* temp = head;
        while(temp->next != nullptr){
            count++;
            temp = temp->next;
        }
    }
    return count;
}

void LinkedList::clear(){
    if (head == nullptr){
        delete head;
    } else {
        Node* temp = head;
        Node* remove;
        while(temp->next != nullptr){
            remove = temp;
            temp = temp->next;
            delete remove;
        }
    }

}

int LinkedList::get(int index){
    int result = -1;

    if(index > size()){
        std::cout << "Index selection is out of range" << std::endl;
    } else if (head == nullptr){
        std::cout << "Linked List is empty" << std::endl;
    } else {
        Node* temp = head;
        int count = 0;

        while(temp != nullptr){
                if(count == index){
                    result = temp->data;
                }
                count++;
                temp = temp->next;
            }
        } 
    return result;
}

void LinkedList::addFront(int data){
    Node* newNode = new Node(data, head);
    head = newNode;

}

void LinkedList::addBack(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
    } else {
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }

}