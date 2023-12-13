#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &original, stack<int> &reversed) {

    while (!original.empty()) {
        reversed.push(original.top());
        original.pop();
    }
}

int main() {

    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    stack<int> reversedStack;
    reverseStack(myStack, reversedStack);

    while (!reversedStack.empty()) {
        cout << reversedStack.top() << "\n";
        reversedStack.pop();
    }
    
    return 0;
}