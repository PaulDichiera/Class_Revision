#include <iostream>

#include "linkedlist.h"

LinkedList::LinkedList(){
    this->head = nullptr;
}

LinkedList::~LinkedList(){
    //Todo
    //clear();
}

int LinkedList::size(){
    int count = 0;

    if(head == nullptr){
        std::cout << "** List is empty **" << std::endl;
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
    if(head == nullptr){
        std::cout << "** List is empty, delete action aborted **" << std::endl;
    }else{
        Node* remove = head;
        Node* temp = head;
        while(temp != nullptr){
            remove = temp;
            temp = temp->next;
            std::cout << "** deleting node **" << std::endl;
            delete remove;
        }
        head = nullptr;
    }
}

int LinkedList::get(int index){
    int result = -1;
    if(head == nullptr){
        std::cout << "** List is empty, get action aborted **" << std::endl;
    }else if(index > size()){
        std::cout << "** Selection above possible range, get action aborted **" << std::endl;
    }else if(index < 0){
        std::cout << "** Selection below possible range, get action aborted **" << std::endl;
    }else{
        int count = 0;
        Node* temp = head;
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
    if(head == nullptr){
        head = newNode;
    }else{
        newNode->next = head;
        head = newNode;
    }
    std::cout << "** Node: " << newNode->data << " added to front **" << std::endl;
}

void LinkedList::addBack(int data){
    if(head == nullptr){
        addFront(data);
    }else{
        Node* temp = head;
        Node* newNode = new Node(data);
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
        std::cout << "** Node: " << newNode->data << " added to back **" << std::endl;
    }
}

void LinkedList::deleteFront(){
    if(head == nullptr){
        std::cout << "** List is empty, delete front action aborted **" << std::endl;
    }else{
        Node* remove = head;
        head = head->next;
        delete remove;
        std::cout << "** Front node deleted **" << std::endl;
    }
}

void LinkedList::deleteBack(){
    if(head == nullptr){
        std::cout << "** List is empty, delete back action aborted **" << std::endl;
    }else{
        Node* remove = head;
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        remove = temp->next;
        delete remove;
        temp->next = nullptr;
        std::cout << "** Front node deleted **" << std::endl;
    }
}

// void LinkedList::addAt(int index, int data){
//     if(head == nullptr){
//         std::cout << "** List is empty, add at action aborted **" << std::endl;
//     }else if(index > size()){
//         std::cout << "** Selection above possible range, add at action aborted **" << std::endl;
//     }else if(index < 0){
//         std::cout << "** Selection below possible range, add at action aborted **" << std::endl;
//     }else if(index == 0){
//         addFront(data);
//     }else{
//         int count = 0;
//         Node* temp = head;
//         while(temp != nullptr){
//             if(count == index - 1){
//                 Node* newNode = new Node(data);
//                 newNode->next = temp->next;
//                 temp->next = newNode;
//                 std::cout << "Node: " << newNode->data << " added at index" << count << std::endl; 
//             }
//             std::cout << "entered" << std::endl;
//             count++;
//             temp = temp->next;
//         }
//     }
// }

// void LinkedList::deleteAt(int index){
//     if(head == nullptr){
//         std::cout << "** List is empty, delete at action aborted **" << std::endl;
//     }else{
//         int count = 0;
//         Node* remove = head;
//         Node* temp = head;
//         while(temp->next != nullptr){
//             if(count == index - 1){
//                 std::cout << "** Node: " << temp->data << " deleted at index " << count << std::endl;
//                 remove = temp->next;
//                 temp->next = remove->next;
//                 delete remove;
//             }
//             temp = temp->next;
//             count++;
//         }
//     }
// }

void LinkedList::addAt(int index, int data){
    if(head == nullptr){
        std::cout << "** List is empty, add at opeation aborted **" << std::endl;
    }else if(index > size()){
        std::cout << "** Index is above range, add at operation aborted **" << std::endl;
    }else if(index < 0){
        std::cout << "** Index is below range, add at operation aborted **" << std::endl;
    }else if(index == 0){
        addFront(data); // Method called to add to front of list
    }else if(index == size()){
        addBack(data);
    }else{
        int count = 0;
        Node* temp = head;
        while(temp != nullptr && count != index -1){
            temp = temp->next;
            count++;
        }
        Node* newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
        std::cout << "** Node: " << newNode->data << " added at index: " << index << std::endl;
    }
}

void LinkedList::deleteAt(int index){
    if(head == nullptr){
        std::cout << "** List is empty, delete at action aborted **" << std::endl;
    }else if(index > size()){
        std::cout << "** Index is above range, delete ar action aborted **" << std::endl;
    }else if(index < 0){
        std::cout << "** Index is below range, delete at action aborted **" << std::endl;
    }else if(index == 0){
        deleteFront();
    }else if(index == size()){
        deleteBack();
    }else{
        int count = 0;
        Node* temp = head;
        Node* remove = head;
        while(temp->next != nullptr && count != index -1){
            temp = temp->next;
            count++;
        }
        remove = temp->next;
        temp->next = remove->next;
        delete remove;
        std::cout << "** Node deleted at index: " << index << std::endl;
    }
}