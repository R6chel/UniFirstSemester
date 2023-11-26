#include <iostream>
using namespace std;

int sumDig (int num) {
    if(num == 0) {
        return 0;
    }
    return (num % 10) + sumDig (num / 10);
}

int main() {

    int number;
    cout << "enter a natural num: ";
    cin >> number;

    if(number < 0) {
        cout << "invalid num\n";
    } else {
        int sum = sumDig (number);
        cout << "sum of digits " << number << " = " << sum << "\n";
    }

    return 0;
}