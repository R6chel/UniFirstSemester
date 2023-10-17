/*  
    Napisz program ktory obliczy sume kwadratow liczb od 1 do n. Zastosuj instrukcje petli for. Wyswietl wynik w postaci:
    cout << "1*1 + 2*2 + ... + n*n << suma << endl;"
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "enter an integer: ";
    cin >> n;

    int sum;

    for (int i = 1; i <= n; i++) {
        sum += i * i;

        if (i == 1) {
        cout << i << "*" << i;
        } 
        else {
            cout << " + " << i << "*" << i;
        }
    }
    cout << " = " << sum << endl;

    return 0;
}