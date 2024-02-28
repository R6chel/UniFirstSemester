#include <iostream>

using namespace std;

int szereg(int x, int n) {
	
	int num = 1;
	int sum = 0;


	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			sum += x * num;
			num++;
		}
	} 
	else {
		cout << "Wprowadz wartosc n > 0.\n";
	}

	return sum;
}

int main() {
		
	int x, n;

	cout << "Wprowadz wartosc x: ";
	cin >> x;

	cout << "Wprowadz wartosc n: ";
	cin >> n;

	int result = szereg(x, n);

	cout << "Suma: " << result << "\n";

	return 0;
}