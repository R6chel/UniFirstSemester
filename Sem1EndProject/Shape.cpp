/*
Shape.cpp

desired shape:

#
    #
        #
            #
        #
    #
#

size = 4;


1. Loop for the upper section

size = 3

#
    #

2. Standalone print for the summit
        # <- summit

3. Loop for the descending bit.

    #
#
*/

/*
1) USING FUNCTIONS:
#include <iostream>

using namespace std;

void printShape(char bodyBlock, int indentAmount) {

    for (int i = 0; i < indentAmount; i++) {
        cout << "   ";
    }
    cout << bodyBlock << "\n";
}

int main() {

    char bodyBlock;
    int size;

    cout << "Enter shape size: ";
    cin >> size;
    
    cout << "Select a body: ";
    cin >> bodyBlock;

    // Ascending part
    for (int i = 0; i < size - 1; i++)
        printShape(bodyBlock, i);

    // Summit part
    printShape(bodyBlock, size - 1);

    // Descending part
    for (int i = size - 2; i >= 0; i--)
        printShape(bodyBlock, i);

    return 0;
}

2) USING VECTORS:

#include <iostream>
#include <vector>

using namespace std;

// Function to create and initialize the body of the shape
vector<vector<char>> createShapeBody(int size, char symbol) {
    vector<vector<char>> body;
    for (int i = 0; i < size; ++i) {
        body.push_back(vector<char>(2 * i + 1, symbol));
    }
    return body;
}

void printShape(char bodyBlock, int indentAmount) {
    for (int i = 0; i < indentAmount; i++) {
        cout << "   ";
    }
    cout << bodyBlock << "\n";
}

int main() {
    char bodyBlock;
    int size;

    cout << "Enter shape size: ";
    cin >> size;

    cout << "Select a body: ";
    cin >> bodyBlock;

    // Ascending part
    for (int i = 0; i < size - 1; i++)
        printShape(bodyBlock, i);

    // Summit part
    printShape(bodyBlock, size - 1);

    // Descending part
    for (int i = size - 2; i >= 0; i--)
        printShape(bodyBlock, i);

    return 0;
}

BASELINE
*/
#include <iostream>
using namespace std;

int main() {

    char bodyBlock;
    cout << "Enter body block: ";
    cin >> bodyBlock;

    int size; 
    cout << "Enter size: ";
    cin >> size;

    // Ascending part
    for (int i = 0; i < size; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << "   ";
        }
        // Print bodyBlock
        cout << bodyBlock << "\n";
    }

    // Descending part
    for (int i = size - 2; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << "   ";
        }
        // Print bodyBlock
        cout << bodyBlock << "\n";
    }

    return 0;
}