#include <iostream>

using namespace std;

int main() {

    double sum = 0; 
    int n, tab[200], odd = 0, even = 0;
    
    do {
        cout << "Input number of elements: ";    
        cin >> n;
    } while(n > 200);

    cout << "Declare the values of aforementioned elements: ";
    for(int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    for(int j = 0; j < n; j++) {

        if(tab[j] % 2 == 0) {
        even++;
    } 
        else {
        odd++;
        }
    }

    cout << "Amount of even numbers: " << even << "\n";
    cout << "Amount of odd numbers: " << odd << "\n";
    
    return 0;
}