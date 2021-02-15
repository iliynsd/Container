#ifndef CONTAINER_STACK_H
#define CONTAINER_STACK_H

#include <vector>

using namespace std;

class Stack {
private:
    vector<int> container;
public:
    Stack() {}
    Stack(vector<int> container)
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

    void Push(int value)
    {
        container.push_back(value);
    }
    int Pop()
    {
        if (isEmpty()) {
            throw -1;
        } else {
            auto end = container.end();
            int temp = *(end-1);
            container.pop_back();
            return temp;
        }
    }

    int Fetch()
    {
        if (isEmpty()) {
            throw -1;
        } else {
            auto end = container.end();
            int temp = *(end - 1);
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

};

#endif //CONTAINER_STACK_H
