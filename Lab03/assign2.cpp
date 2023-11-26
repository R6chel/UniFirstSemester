//dzielniki int n /w for loop. jezeli a%b==0 oznacza a/b

#include <iostream>
using namespace std;

int main(){ 
    
    int n;

    cout << "enter an integer: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

return 0;
}