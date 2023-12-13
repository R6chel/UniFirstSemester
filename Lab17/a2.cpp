#include <iostream>
#include <stack>
using namespace std;

int countStackElements(stack<int> &stack_a) {

    int count = 0;
    stack<int> tempStack = stack_a; 

    while (!tempStack.empty()) {
        tempStack.pop();
        count++;
    }

    return count;
}

int main() {

    stack<int> myStack;
    myStack.push(63);
    myStack.push(5746);
    myStack.push(534);

    int elementNum = countStackElements(myStack);
    cout << elementNum << "\n";

    return 0;
}