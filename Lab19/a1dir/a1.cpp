#include <iostream>
#include <fstream>

using namespace std;

int main() {

    fstream file;

    file.open("prostokat.txt", ios::in);

    if (file.good() == false) {
        cout << "File cannot be opened.";

        return 1;
    }
    
    int a, b;

    if (!(file >> a >> b)) {
        cout << "Error reading from file.";

        return 1;
    }

    file.close();

    int area = a * b;
    int circumference = 2 * (a + b);

    file.open("obliczenia.txt", ios::out);

    if (file.good() == false) {
        cout << "Could not create output file.";

        return 1;
    }

    file << a << " * " << b << " = " << area << "\n";
    file << "2 * (" << a << " + " << b << ") = " << circumference << "\n";

    return 0;
}