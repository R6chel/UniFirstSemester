#include <iostream>
using namespace std;

long int power(int p, int w) {
    if(w == 0) {
        return 1;
    } else if(w == 1) {
        return p;
    } else {
        return p * power(p, w - 1);
    }
}

int main() {
    
    int base, exp;
    cout << "enter base: ";
    cin >> base;

    cout << "enter exponent: ";
    cin >> exp;

    long int result = power(base, exp);
    cout << base << " ^ " << exp << " = " << result << "\n";

    return 0;
}