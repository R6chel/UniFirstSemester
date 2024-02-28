#include <iostream>

using namespace std;

struct Prostokat {

	double a, b, area;
};

void calcArea(Prostokat& rect) {

	rect.area = rect.a * rect.b;
}

int main() {

/*
  Prostokat rectangles[2];
	rectangles[0] = {2,2};
	rectangles[1] = {4,4};
*/
	Prostokat rectangles[2] = { {2, 2}, {4, 4} };

	for (int i = 0; i < 2; ++i) {
		calcArea(rectangles[i]);
		cout << "Pole " << (i + 1) << ": " << rectangles[i].area << "\n";
	}

	return 0;
}
