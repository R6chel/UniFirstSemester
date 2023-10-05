//program pobiera int x od uzytkownika i wypisuje wszystkie liczby 1-x podzielne przez 3

#include <iostream>
using namespace std;

int main() {


    int x;
    int i = 1;
    
    cin >> x;

    while(i <= x) {
        if (i % 3 == 0){
            cout << i << " ";
        }
        i++;
    }
    cout << "\n";
    return 0;
}