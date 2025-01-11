#include <iostream>
#include <memory>

#include "linkedList.h"

int main(void){

    std::shared_ptr<LinkedList> list = std::make_shared<LinkedList>();

    list->addBack(22);
    list->addBack(24);
    list->addBack(28);

    for(int i = 0; i < list->size(); i++){
        std::cout << list->get(i) << std::endl;
    }

    list->deleteBack();

      for(int i = 0; i < list->size(); i++){
        std::cout << list->get(i) << std::endl;
    }

    list->deleteBack();
    
      for(int i = 0; i < list->size(); i++){
        std::cout << list->get(i) << std::endl;
    }

    return EXIT_SUCCESS;
}