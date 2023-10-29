#include <iostream>

using namespace std;

int main() {

    int arr[3][3];

    cout << "enter array elements: ";    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int dtm = arr[0][0] * arr[1][1] * arr[2][2] + arr[0][1] * arr[1][2] * arr[2][0] + arr[0][2] * arr[1][0] * arr[2][1]
            - arr[0][2] * arr[1][1] * arr[2][0] - arr[0][0] * arr[1][2] * arr[2][1] - arr[0][1] * arr[1][0] * arr[2][2];

    cout << "3x3 matrix determinant: " << dtm << "\n";

    return 0;
}
