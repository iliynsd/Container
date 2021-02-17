#ifndef CONTAINER_STACK_H
#define CONTAINER_STACK_H

#include <vector>
#include "Exception.h"

using namespace std;

template<class T>
class Stack {
private:
    vector<T> container;
public:
    Stack() {}
    Stack(vector<T> container)
    {
        this->container = container;
    }
    //TODO Написать конструктор копирования

    void Push(T value)
    {
        container.push_back(value);
    }
    T Pop()
    {
        if (isEmpty()) {
            throw Exception::Bottom;
        } else {
            auto end = container.end();
            T temp = *(end-1);
            container.pop_back();
            return temp;
        }
    }

    T Fetch()
    {
        if (isEmpty()) {
            throw Exception::Bottom;
        } else {
            auto end = container.end();
            T temp = *(end - 1);
            return temp;
        }
    }

    void Clear()
    {
        container.clear();
    }

    bool isEmpty()
    {
        return container.empty();
    }

    void ForEach(void(*Func)(T))
    {
        for (auto i = container.rbegin(); i < container.rend(); ++i) {
            Func(*i);
        }
    }
    void ForEach(T(*Func)(T))
    {
        for (auto i = container.rbegin(); i < container.rend(); ++i) {
            *i = Func(*i);
        }
    }
};

#endif //CONTAINER_STACK_H
