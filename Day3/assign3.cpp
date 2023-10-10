// Wyswietl tabliczke mnozenia od 1 do 9 za pomoca petli for.

#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 9; ++i) {
    
        for (int j = 1; j <= 9; ++j) {
        
            int result = i * j;
            cout << i << "*" << j << "=" << result << "\t";
        }
        cout << endl;
    }

    return 0;
}
