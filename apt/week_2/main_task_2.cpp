#include <iostream>

void foo(int* x, double* y, char &z);

int main (void) {

    using std::cout;
    using std::endl;

    int i = 10;
    double d = 2.5;
    char c = 'e';

    int* iPtr = &i;
    double* dPtr = &d;

    cout << "iPtr = " << iPtr << ", dPtr = " << dPtr << endl;
    cout << "*iPtr = " << *iPtr << ", *dPtr = " << *dPtr << endl;

    *iPtr = 5;
    *dPtr = 4.25;

    cout << "*iPtr = " << *iPtr << ", *dPtr = " << *dPtr << endl;
    cout << "i = " << i << ", *dPtr = " << *dPtr << endl;

    foo(&*iPtr, &d, c);

    cout << "i = " << i <<  ", d = " << d << ", c = " << c << endl;
    cout << "&*iPtr = " << &*iPtr << endl;
    
    foo(&*iPtr, dPtr, c); // calling the address of whatever the pointer is referenceing.

    cout << "i = " << i << ", d = " << d << ", c = " << c << endl; 

    return EXIT_SUCCESS;
}

void foo(int* x, double* y, char& z) {
    *x += 1;
    *y += 2;
    ++z;
}


