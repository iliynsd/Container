#ifndef CONTAINER_CONTAINER_H
#define CONTAINER_CONTAINER_H

#include <vector>
#include "Exception.h"

using namespace std;

template<class T>
class Container {
protected:
    vector<T> container;
public:
    void Push(T value)
    {
        container.push_back(value);
    }

    void Clear()
    {
        container.clear();
    }

    bool isEmpty()
    {
        return container.empty();
    }

    virtual T Pop() = 0;
    virtual T Fetch() = 0;
};


#endif //CONTAINER_CONTAINER_H
