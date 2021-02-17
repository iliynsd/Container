#ifndef CONTAINER_QUEUE_H
#define CONTAINER_QUEUE_H

#include "Container.h"
#include "IEnumerable.h"

using namespace std;

template<class T>
class Queue : public Container<T>, IEnumerable {
public:
    Queue() {}
    Queue(vector<T> container) {}

    T Pop() override {}
    T Fetch() override {}

    void ForEach(void(*Func)(T)) override {}
    void ForEach(T(*Func)(T)) override {}
};


#endif //CONTAINER_QUEUE_H
