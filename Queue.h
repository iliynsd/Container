#pragma once
#include <vector>
#include "Exception.h"
#include "Stack.h"




using namespace std;

template<class T>
class Queue {
private:
    vector<T> container;
public:
    Queue() {}
    Queue(vector<T> container)
    {
        this->container = container;
    }
    //TODO Написать конструктор копирования
    /*
    Stack(Stack stack)
    {
        container = stack;
    }
    */

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
        /*
        if (container.empty()) {
            return true;
        } else {
            return false;
        }
        */

        return container.empty();
    }

     void ForEach(void(*Func)(T))
    {
        for (auto i = container.rend()-1; i >= container.rbegin(); --i) {
            Func(*i);
        }
    }
      void ForEach(T(*Func)(T))
    {
        for (auto i = container.rend()-1; i >= container.rbegin(); --i){
            *i = Func(*i);
        }
    }


};
