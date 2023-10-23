#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    char tab[10];
    
    cout << "enter characters: ";

      for (int i = 0; i < 10; i++) {
            cin >> tab[i];
            cout << tab[i];

        if (islower(tab[i])) {
            tab[i] = toupper(tab[i]);
        } else if (isupper(tab[i])) {
            tab[i] = tolower(tab[i]);
    }
}

cout << " -> ";

    for (int i = 0; i < 10; i++) {
        cout << tab[i];
    }

    return 0;
}