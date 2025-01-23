#ifndef A_H
#define A_H

#include <iostream>

class A {
    public:
        A();
        virtual ~A();

        virtual int foo();
        virtual int foo(int x);
};

#endif //A_H