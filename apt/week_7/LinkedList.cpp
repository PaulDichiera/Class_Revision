#include <iostream>

#include "LinkedList.h"

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::~LinkedList(){
    clear();

}

int LinkedList::size(){
    int count= 0;
    if(head == nullptr){
        std::cout << "this list is empty" << std::endl;
    }else{
        Node* temp = head;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
    }
    return count;
}

void LinkedList::clear(){
    Node* temp = head;
    if(head == nullptr){
        std::cout << "Linked list is empty" << std::endl;
    }else{
        while(temp != nullptr){
            Node* remove;
            remove = temp;
            temp = temp->next;
            std::cout << "Deleting node" << std::endl;
            delete remove;
        }
        head = nullptr;
    }


}

int LinkedList::get(int index){
    int data;
    
    if(index > size()){
        std::cout << "Selected index is out of range" << std::endl;
        data = -1;
    }else if (head == nullptr){
        std::cout << "list is empty" << std::endl;
        data = 0;
    }else{
        Node* temp = head;
        int count = 0;
        while(temp != nullptr){
            if(count == index){
                data = temp->data;
            }
            count++;
            temp = temp->next;
        }
    }
    return data;
}

void LinkedList::addFront(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
    }else{
        newNode->next = head;
        head = newNode;
    }
    std::cout << "Successfully added " << data << " to front" << std::endl;

}

void LinkedList::addBack(int data){
        Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        std::cout << "Successfully added " << data << " to front" << std::endl;
    }else{
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
        std::cout << "Successfully added " << data << " to back" << std::endl;
    }
}

void LinkedList::deleteFront(){
    if(head != nullptr){
        Node* remove = head;
        head = head->next;
        delete remove;
    }else{
        std::cout << "List empty" << std::endl;
    }

}

void LinkedList::deleteBack(){
    if(head == nullptr){
        std::cout << "List empty" << std::endl;
    }else if(head->next == nullptr){
        delete head;
        head = nullptr;

    }else{
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
}