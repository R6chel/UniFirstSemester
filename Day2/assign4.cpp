//pobiera int x i wyswietla trojkat o boku x przy pomocy petli while

#include <iostream>
using namespace std;

int main() {

    int x; 
    int line = 1;
    int temp;

    cin >> x;
    cout << endl;

    while(x-- > 0) {
        temp = line;
        while(temp-- > 0) {
            cout << "*";
        }
        line++;
        cout << "\n"; 
    }
    
    return 0;
}