#include <iostream>

class Shape {
    public:
        virtual void draw(){
            std::cout << "Drawing generic shape" << std::endl;
        }
};

class Circle : public Shape {
    public:
        void draw() override {
            std::cout << "Drawing a circle" << std::endl;
        }
};

class Square : public Shape {
    public:
        void draw() override {
            std::cout << "Drawing a square" << std::endl;
        }
};

int main(void){

    Shape* shape1;
    Circle c;
    Square s;

    shape1 = &c;
    shape1->draw(); // calls the circles draw because of virtual function

    shape1 = &s;
    shape1->draw(); // calls the squares draw()


    return EXIT_SUCCESS;
}


