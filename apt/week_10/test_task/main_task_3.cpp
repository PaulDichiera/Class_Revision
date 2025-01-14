#include <iostream>

class Animal {
    public:
        void eat(){
            std::cout << "The animal eats" << std::endl;
        }

        void scratch(){
            std::cout << "The animal scratches an itch" << std::endl;
        }

        void sleep(){
            std::cout << "The animal sleeps" << std::endl;
        }
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout << "The dog barks" << std::endl;
        }

        void howl(){
            std::cout << "The dog howls" << std::endl;
        }
};

class Cat : public Animal{
    public:
        void meow(){
            std::cout << "The cat meows" << std::endl;
        }

        void purr(){
            std::cout << "The cat purrs" << std::endl;
        }
};

int main(void){

    Dog d;
    Cat c;

    d.sleep();
    c.purr();


    return EXIT_SUCCESS;
}
