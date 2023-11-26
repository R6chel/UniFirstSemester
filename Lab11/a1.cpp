#include <iostream>
using namespace std;

int minPtrVal(const int* ptr1, const int* ptr2) {
   
    int val1 = *ptr1;
    int val2 = *ptr2;

    return (val1 < val2) ? val1 : val2;
}

int main() {

    int num1 = 26;
    int num2 = 12;
    
    int* ptrNum1 = &num1;
    int* ptrNum2 = &num2;

    int minVal = minPtrVal(ptrNum1, ptrNum2);
    cout << minVal;

    return 0;
}