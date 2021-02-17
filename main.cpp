#include <iostream>
#include "Stack.h"
#include "utilites.h"
#include "Exception.h"


using namespace std;

int main() {
    system("chcp 65001");

    Stack<int> stack;
    PrintEmpty(stack);

    stack.Push(5);
    stack.Push(7);
    PrintEmpty(stack);

    stack.ForEach(Print);
    stack.ForEach(Add10);
    stack.ForEach(Print);
    return 0;
}
