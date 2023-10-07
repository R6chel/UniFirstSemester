//oblicza x**y za pomocą while loop

#include <iostream>
using namespace std;

int main() {

    double base, exponent, result;


    cout << "Podaj podstawe potęgi: ";
    cin >> base;

    result = 1;

    cout << "Podaj wykladnik potegi: ";
    cin >> exponent;

    while(exponent-- > 0) {
        result = result * base;
    }
    cout << "Wynik: " << result << endl;


    return 0;
}
//wip