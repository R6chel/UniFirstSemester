//pobiera int x i wyswietla trojkat o boku x przy pomocy petli while

#include <iostream>
using namespace std;

int main() {

    int x; 
    int asterisk = 1;
    int temp;

    cin >> x;
    cout << endl;

    while(x-- > 0) {
        temp = asterisk;
        while(temp-- > 0) {
            cout << "*";
        }
        asterisk++;
        cout << endl;
    }
    
    cout << endl;
    
    return 0;
}