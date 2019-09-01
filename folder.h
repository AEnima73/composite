#ifndef FOLDER_H
#define FOLDER_H

#include <iostream>
#include "IComponent.h"


class Folder : public IComposable
{
    private:
        std::string m_nodeName;
    public:
        Folder(std::string nodeName)
        {
            m_nodeName = nodeName;
            std::cout<<"contruyo carpeta"<<std::endl;
        }

        virtual ~Folder(){}

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

#endif // FOLDER_H
