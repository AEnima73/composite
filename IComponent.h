#ifndef ICOMPONENT_H_INCLUDED
#define ICOMPONENT_H_INCLUDED

#include <iostream>
#include <vector>
#include <algorithm>

class IComposable
{
    public:
        virtual ~IComposable(){};
        virtual void list(int depth) = 0; //operation
        virtual void add(IComposable* component) = 0;
        virtual void remove(IComposable* component) = 0;
        virtual IComposable* getChild(int key) = 0;
};

#endif // ICOMPONENT_H_INCLUDED
