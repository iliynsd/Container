#include <iostream>
#include "Stack.h"
#include "utilites.h"
#include "Exception.h"
#include "Queue.h"


using namespace std;

int main() {
    system("chcp 65001");

    Stack<int> stack;
    Queue<int> queue;
    /*
    PrintEmpty(stack);

    stack.Push(5);
    stack.Push(7);
    PrintEmpty(stack);

    stack.ForEach(Print);
    stack.ForEach(Add10);
    stack.ForEach(Print);
*/

    PrintEmpty(queue);

    queue.Push(5);
    queue.Push(7);
    PrintEmpty(queue);

    queue.ForEach(Print);
    queue.ForEach(Add10);
    queue.ForEach(Print);


    
    return 0;
}
