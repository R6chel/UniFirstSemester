#include <iostream>

using namespace std;

int main() {

    double sum = 0; 
    int n, tab[200];
    
    do {
        cout << "Input number of elements: ";    
        cin >> n;
    } while(n > 200);

    cout << "Declare the values of aforementioned elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    for(int j = 0; j < n; j++) {
        sum += tab[j];
    }

    double avg = sum / n;
    cout << "Average value: " << avg << "\n";

    return 0;
}