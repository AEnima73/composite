#ifndef FILE_H
#define FILE_H

#include <iostream>
#include "IComponent.h"


class File : public IComposable
{
    private:

    public:
        File(std::string nodeName)
        {
        }

        virtual ~File(){}

        void list(int depth)//operation
        {
        }

        void add(IComposable* component)
        {
        }

        void remove(IComposable* component)
        {
        }

        IComposable* getChild(int key)
        {
        }
};

#endif // FILE_H
