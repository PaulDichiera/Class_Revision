#include <iostream>

// Base Class

class Animal {
    public:
        void eat() {
            std::cout << "The animal eats" << std::endl;
        }
};

class Dog : public Animal {
    public:
        void bark() {
            std::cout << "The dog barks" << std::endl;
        }
};

int main(void) {

    Dog d;
    d.eat();    //Inherited from animal
    d.bark();   //Defined in dog


    return EXIT_SUCCESS;
}