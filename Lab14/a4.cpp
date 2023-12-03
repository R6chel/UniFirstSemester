#include <iostream>
using namespace std;

struct Rectangle {

    int a;
    int b;

    int calcArea() {

        return a * b;
    }

    int calcPerimeter() {

        return 2 * (a + b);
    }
};

int main() {

    Rectangle rect1, rect2;

    rect1.a = 5;
    rect1.b = 10;

    cout << "Rectangle 1 area: " << rect1.calcArea() << "\n";
    cout << "Rectangle 1 perimeter: " << rect1.calcPerimeter() << "\n";

    rect2.a = 6;
    rect2.b = 13;

    cout << "Rectangle 2 area: " << rect2.calcArea() << "\n";
    cout << "Rectangle 2 perimeter: " << rect2.calcPerimeter() << "\n";

    return 0;
}