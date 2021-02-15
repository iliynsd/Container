#ifndef CONTAINER_UTILITES_H
#define CONTAINER_UTILITES_H

#include <iostream>
#include "Stack.h"

using namespace std;

void PrintEmpty(Stack stack)
{
    if (stack.isEmpty()) {
        cout << "Стек пустой" << endl;
    } else {
        cout << "Стек не пустой" << endl;
    }
}

void PrintStack(Stack stack)
{

}

#endif //CONTAINER_UTILITES_H
