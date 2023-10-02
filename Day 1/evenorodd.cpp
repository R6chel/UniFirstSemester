#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;

    cout << "Input three whole numbers one by one: \n";

    cin >> num1;
    cin >> num2; 
    cin >> num3; 

    if(num1 % 2 == 0) {
        cout << num1 << " is even.\n";
    }
    else {
        cout << num1 << " is odd.\n";
    }


    if(num2 % 2 == 0) {
        cout << num2 << " is even.\n";
    }
    else {
        cout << num2 << " is odd.\n";
    }

    if(num3 % 2 == 0) {
        cout << num3 << " is even.\n";
    }
    else {
        cout << num3 << " is odd.\n";
    }


return 0;
}