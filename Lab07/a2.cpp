#include <iostream>

using namespace std;

int main() {

    int arr[5][5];

    cout << "enter array elements:\n"; 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int max_value = arr[0][0];
    int max_i = 0, max_j = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] > max_value) {
                max_value = arr[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    cout << "maximum value in the array: " << max_value << "\n";  
    cout << "position: arr[" << max_i << "][" << max_j << "]\n";  

    return 0;
}
