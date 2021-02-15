#include <iostream>
#include "Stack.h"
#include "utilites.h"

using namespace std;

int main() {
    system("chcp 65001");

    Stack stack;
    PrintEmpty(stack);

    stack.Push(5);
    stack.Push(7);
    PrintEmpty(stack);

    int temp;

    try {
        temp = stack.Pop();
        cout << temp << endl;

        temp = stack.Pop();
        cout << temp << endl;
    } catch (int e) {
        if (e == -1) {
            cout << "Вы достигли ДНА" << endl;
        }
    }
    
    return 0;
}
