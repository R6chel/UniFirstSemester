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