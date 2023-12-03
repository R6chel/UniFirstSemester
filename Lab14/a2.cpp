#include <iostream>
using namespace std;

struct Car {

    string make, model;
    int year, capacity;
};

int main() {

    Car cars[3];
    
    for (int i = 0; i < 3; i++) {
        Car car;
        cout << "Brand: ";
        cin >> car.make;
        cout << "Model: ";
        cin >> car.model;
        cout << "Year: ";
        cin >> car.year;
        cout << "Engine capacity (ccm): ";
        cin >> car.capacity;
        cars[i] = car;
    }
        
    cout << "Displaying cars: \n";

	for (int i = 0; i < 3; i++)
		cout << i + 1 << ": " << cars[i].make << " " <<  cars[i].model << " | Year: " << cars[i].year << " | Engine capacity: " << cars[i].capacity << "cc" "\n";

    return 0;
}