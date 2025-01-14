#ifndef B_H
#define B_H

#include <iostream>
#include "A.h"

class B : public A{
    public:
        B();
        virtual ~B();

        virtual int foo();
        virtual void bar();
        virtual void bar(double y);
};


#endif //B_H