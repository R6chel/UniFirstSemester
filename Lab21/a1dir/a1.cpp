#include <iostream>
#include "Odcinek.h"

using namespace std;

int main() {

  Odcinek odcinek(0, 0, 3, 4);
  double dlugosc = odcinek.dlugoscOdcinka();

  cout << "Segment length: " << dlugosc << "\n";

  return 0;
}