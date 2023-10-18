#include <iostream>

using namespace std;

int main() {

    int n, sum = 0, tab[200];

    do {
        cout << "Input number of elements: ";
        cin >> n;
    } while (n > 200);

    cout << "Declare the values of aforementioned elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    bool isAscending = true;
    for (int i = 0; i < n - 1; i++) {
        if (tab[i + 1] < tab[i]) {
            isAscending = false;
            break;
        }
    }

    if (isAscending) {
        cout << "Array is ascending." << endl;
    }
    else {
        cout << "Array isn't ascending." << endl;
    }
    
    cout << n << "   ";

    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }

    cout << "=> ";
    if (isAscending)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}