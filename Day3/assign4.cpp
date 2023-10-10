//pobiera od uzytkownika int n i wyswietla trojkat o boku n. skierowany wierzcholkiem do dolu

#include <iostream>
using namespace std;

int main() {

    int x;

    cin >> x;
    cout << endl;

    for (int i = x; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}