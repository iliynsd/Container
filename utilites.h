#ifndef CONTAINER_UTILITES_H
#define CONTAINER_UTILITES_H

#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

template<typename D>
void PrintEmpty(Stack<D> stack)
{
    if (stack.isEmpty()) {
        cout << "Стек пустой" << endl;
    } else {
        cout << "Стек не пустой" << endl;
    }
}
template<typename D>
void PrintEmpty(Queue<D> queue)
{
    if (queue.isEmpty()) {
        cout << "Нет очереди" << endl;
    } else {
        cout << "Есть очередь" << endl;
    }
}

void Print(int num)
{
    cout << num << endl;
}

int Add10(int num)
{
    return num + 10;
}

#endif //CONTAINER_UTILITES_H
