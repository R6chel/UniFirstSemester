//pobiera liczbe od uzytkownika i sprawdza ilosc cyfr w liczbie

#include <iostream>
using namespace std;

int main() {

    int num, digit;

    cin >> num;

    while(num > 0) {
        digit++;
        num = num/10;
    }
    cout << digit << endl;

    return 0;
}