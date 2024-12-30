#include <iostream>
#include "LinkedList.h"
#include "Node.h"

int main(void){

    LinkedList* list = new LinkedList();

    list->addBack(5);
    list->addBack(7);
    list->addBack(21);

    std::cout << "Linked List Size: " << list->size() << std::endl;

    for (int i = 0; i <= list->size(); i++){
        std::cout << "Linked List Value: " << list->get(i) << std::endl;
    }

    return EXIT_SUCCESS;
}