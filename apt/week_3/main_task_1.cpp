#include <iostream>

    #define LENGTH         10;

class Example { //create example object 
    public:
        Example (double value);

        void setValue(double value);
        double getValue();
        ~Example();
    private:
        double* ptrValue;
};

int main(void) {

    Example* example = new Example (7.5);

    double dbl = 10;
    example->setValue(dbl);
    std::cout << example->getValue() << std::endl;
    delete example;
    
    return EXIT_SUCCESS;
}

Example::Example(double value) {
    this->ptrValue = new double(value);
}

void Example::setValue(double value) {
    *this->ptrValue = value;
}

double Example::getValue() {
    
    return *this->ptrValue;
}

Example::~Example(){
    std::cout << "destructor activated" << std::endl;
}