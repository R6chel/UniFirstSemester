#include "Odcinek.h"
#include <cmath>

using namespace std;

Odcinek::Odcinek(int _x1, int _y1, int _x2, int _y2) {

    if (_x1 == _x2 && _y1 == _y2) {
        std::cout << "Cannot create a segment with length = 0.\n";
        x1 = y1 = x2 = y2 = 0;
    } else {
        x1 = _x1;
        y1 = _y1;
        x2 = _x2;
        y2 = _y2;
    }
}


double Odcinek::dlugoscOdcinka() const {

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}