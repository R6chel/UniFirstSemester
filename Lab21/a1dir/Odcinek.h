#ifndef ODCINEK_H
#define ODCINEK_H

#include <iostream>
#include <cmath>

using namespace std;

class Odcinek {

private:
    int x1, y1, x2, y2;

public:
    Odcinek(int _x1 = 0, int _y1 = 0, int _x2 = 0, int _y2 = 0) {

        if (_x1 == _x2 && _y1 == _y2) 
            cout << "Invalid coordinates.\n";
        else {
            x1 = _x1;
            y1 = _y1;
            x2 = _x2;
            y2 = _y2;
        }
    }

    double dlugoscOdcinka() const {

        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};

#endif