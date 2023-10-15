//pobiera liczbe od uzytkownika i sprawdza ilosc cyfr w liczbie

#include <iostream>
using namespace std;

int main() {

    int num;
    cin >> num;

    int digit = 0;

    while(num > 0) {
        digit++;
        num = num/10;
    }
    cout << digit << endl;

    return 0;
}