#include <iostream>
using namespace std;

void asterisk(int n) {

    if(n == 0) {
        return;
    }

    asterisk(n - 1);

    for(int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << "\n";
}

void tri(int n) {
    asterisk(n);
}

int main() {

    int height = 5;
    tri(height);

    return 0;
}