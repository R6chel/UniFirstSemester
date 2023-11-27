#include <iostream>
using namespace std;

struct zwierze {
	string species, name;
	int age = 0;
};

int main() {

	zwierze z;

	cout << "enter your pet's info: \n";

	cout << "species: ";
	cin >> z.species;

	cout << "name: ";
	cin >> z.name;

	cout << "age: ";
	cin >> z.age;

	cout << "\ndisplaying your pet's info: \n";
	cout << z.species << " " << z.name << " | " << z.age << "\n";

	return 0;
}
