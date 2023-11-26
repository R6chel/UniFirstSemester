#include <iostream>
using namespace std;

int* makeArr(int n) {

    int* arr = new int[n]; 
    
    return arr; 
}

void freeArr(int* arr) {

    delete[] arr; 
    arr = nullptr; 
}

int main() {
    
    int n = 5; 

    int* dynamicArr = makeArr(n);

    freeArr(dynamicArr);

    return 0;
}