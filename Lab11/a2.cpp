#include <iostream>
using namespace std;

int* smallerVal(int* num1, int* num2) {

    if (*num1 < *num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {

    int a = 26;
    int b = 12;

    int* smaller = smallerVal(&a, &b);

    cout << *smaller;

    return 0;
}