#include <iostream>
#include <string>

using namespace std;

class Function {

private:
    double a, b;

public:
    Function(double _a = 1, double _b = 0) {

        if (_a == 0 && _b == 0) {
            cout << "Invalid values for a and b.\n";
        } else {
            a = _a;
            b = _b;
        }
    }

    double value(double x) {

        return a * x + b;
    }
};

int main() {

    Function fun(3, 4);

    double result = fun.value(5);
    cout << "Function value for x = 5: " << result << "\n";

    return 0;
}