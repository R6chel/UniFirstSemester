#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[4][5], n = 4, m = 5;

    srand(time(NULL));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            tab[i][j] = rand() % 10;
        }
    }

    cout << "original array:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << tab[i][j] << " ";
        }
        cout << "\n";
    }

    int transTab[5][4];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            transTab[i][j] = tab[j][i];
        }
    }

    cout << "transposed array:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << transTab[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}