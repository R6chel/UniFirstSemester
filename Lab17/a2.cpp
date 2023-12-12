#include <iostream>
#include <stack>
using namespace std;

int stackElements(stack<int> &stack_a) {

    return stack_a.size();
}

int main() {

    stack<int> myStack;
    myStack.push(6);
    myStack.push(576456546);
    myStack.push(534);

    int elementNum = stackElements(myStack);
    cout << elementNum << "\n";

    return 0;
}