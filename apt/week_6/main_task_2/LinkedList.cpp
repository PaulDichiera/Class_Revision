#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList(){
    
    head = nullptr;
    last = nullptr;
}

LinkedList::~LinkedList(){
    clear();
}

int LinkedList::size(){
    int count = 0;
    if(head != nullptr){
        count++;
        Node* temp = head;
        while(temp != nullptr){
            std::cout << "counted" << std::endl;
            count++;
            temp = temp->next;
        }
    }
    return count;
}

void LinkedList::clear(){
        Node* temp = head;
        while(temp != nullptr){ // we use temp, not temp->next as this ensures we take our search to the last node, temp->next would take use to the second last node as we are looing one ahead in our comparison
            Node* remove = temp; // we need to create a remove pointer each time as we deleting with the data
            temp = temp->next;
            std::cout << "Deleting Node" << std::endl;
            delete remove;
        }
        head = nullptr;
        last = nullptr;
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
    Node* newNode = new Node(data);
    head = newNode;

}

void LinkedList::addBack(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        last = newNode;
    } else {
        last->next = newNode;
        last = newNode;
    }

}