#include <iostream>
using namespace std;

int arrSum(int arr[], int len) {
    if(len <= 0) {
        return 0; 
    } else {

        return arr[len - 1] + arrSum(arr, len - 1);
    }
}

int main() {

    int array[] = {2, 3, 6, 8, 16};
    int len = sizeof(array) / sizeof(array[0]);

    int sum = arrSum(array, len);
    cout << sum << "\n";

    return 0;
}