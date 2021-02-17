#ifndef CONTAINER_IENUMERABLE_H
#define CONTAINER_IENUMERABLE_H

template<typename T>
class IEnumerable {
public:
    virtual void ForEach(void(*Func)(T)) = 0;
    virtual void ForEach(T(*Func)(T)) = 0;
};


#endif //CONTAINER_IENUMERABLE_H
