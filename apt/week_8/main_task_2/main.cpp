#include <iostream>
#include <memory>

#include "linkedlist.h"

void printList(std::shared_ptr<LinkedList> list);
void printSize(std::shared_ptr<LinkedList> list);

int main(void){

    // LinkedList* list = new LinkedList();
    std::shared_ptr<LinkedList> list = std::make_shared<LinkedList>();

    list->addFront(88);
    list->addFront(23);
    list->addBack(99);
    list->addBack(105);
    list->addFront(2);

    printSize(list);
    printList(list);

    list->deleteFront();
    list->deleteFront();

    printSize(list);
    printList(list);

    list->deleteBack();
    list->deleteBack();

    printSize(list);
    printList(list);

    list->addBack(200);
    list->addFront(1);

    list->addAt(0, 55);

    printSize(list);
    printList(list);

    list->deleteAt(1);

    printSize(list);
    printList(list);

    return EXIT_SUCCESS;
}

void printList(LinkedList* list){
    std::cout << "** List Print Out **" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < list->size(); i++){
        std::cout << "List data: " << list->get(i) << " at index " << i << std::endl;
    }
}

void printSize(LinkedList* list){
    std::cout << std::endl;
    std::cout << "** List size currently: " << list->size() << " **" <<  std::endl;
    std::cout << std::endl;
}