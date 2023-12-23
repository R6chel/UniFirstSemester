#include <iostream>

using namespace std;

class Prostopadloscian {
    
private:
    int a;
    int b;
    int c;

public:
    Prostopadloscian(int aLength, int bWidth, int cHeight) {

        a = aLength;
        b = bWidth;
        c = cHeight;
    }

    int calcArea() {

        return 2 * (a * b + b * c + a * c);
    }
};

int main() {

    int aLength = 6;
    int bWidth = 8;
    int cHeight = 12;

    Prostopadloscian prostopadloscian(aLength, bWidth, cHeight);

    cout << prostopadloscian.calcArea() << "\n";

    return 0;
}