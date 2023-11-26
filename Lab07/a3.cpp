#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[10][10], n = 10, m = 10, col1, col2;

    srand(time(NULL));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            tab[i][j] = rand() % 10;
        }
    }

    cout << "original arr:\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << tab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "enter the 1st column num: ";
    cin >> col1;
    cout << "enter the 2nd column num: ";
    cin >> col2;

    if(col1 >= 0 && col1 < 10 && col2 >= 0 && col2 < 10) {
        for(int i = 0; i < n; i++) {
            int temp = tab[i][col1];
            tab[i][col1] = tab[i][col2];
            tab[i][col2] = temp;
        }

        cout << "modded arr columns " << col1 << " and " << col2 << ":\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << tab[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "invalid column num. (enter column num 0-9)\n";
    }

    return 0;
}