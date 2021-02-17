#ifndef CONTAINER_QUEUE_H
#define CONTAINER_QUEUE_H

#include <vector>
#include "Exception.h"

using namespace std;

template<class T>
class Queue {
private:
    vector<T> container;
public:
    Queue() {}
    Queue(vector<T> container) {}

    void Push(T value) {}
    T Pop() {}
    T Fetch() {}

    void Clear() {}
    bool isEmpty() {}

    void ForEach(void(*Func)(T)) {}
    void ForEach(T(*Func)(T)) {}
};


#endif //CONTAINER_QUEUE_H
