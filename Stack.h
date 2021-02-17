#ifndef CONTAINER_STACK_H
#define CONTAINER_STACK_H

#include "Container.h"
#include "IEnumerable.h"

using namespace std;

template<class T>
class Stack : public Container<T>, IEnumerable {
public:
    Stack() {}
    Stack(vector<T> container)
    {
        this->container = container;
    }
    //TODO Написать конструктор копирования

    T Pop() override
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

    T Fetch() override
    {
        if (isEmpty()) {
            throw Exception::Bottom;
        } else {
            auto end = container.end();
            T temp = *(end - 1);
            return temp;
        }
    }

    void ForEach(void(*Func)(T)) override
    {
        for (auto i = container.rbegin(); i < container.rend(); ++i) {
            Func(*i);
        }
    }
    void ForEach(T(*Func)(T)) override
    {
        for (auto i = container.rbegin(); i < container.rend(); ++i) {
            *i = Func(*i);
        }
    }
};

#endif //CONTAINER_STACK_H
