#include <iostream>

#include "LinkedList.h"

int main(void){

    LinkedList* list = new LinkedList();

    list->addBack(2);
    list->addFront(45);
    list->addBack(55);
    list->addBack(68);
    list->addFront(88);

    std::cout << list->get(0) << std::endl;

    std::cout << "List Size is: " << list->size() << std::endl;

    std::cout << std::endl;
    std::cout << "** List Output **" << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < list->size(); i++){
        std::cout << "List data: " << list->get(i) << std::endl;
    }

    list->deleteBack();

    std::cout << std::endl;
    std::cout << "** List Output **" << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < list->size(); i++){
        std::cout << "List data: " << list->get(i) << std::endl;
    }

    list->deleteFront();
    list->deleteFront();

    std::cout << std::endl;
    std::cout << "** List Output **" << std::endl;
    std::cout << std::endl;

     for(int i = 0; i < list->size(); i++){
        std::cout << "List data: " << list->get(i) << std::endl;
    }

    return EXIT_SUCCESS;
}