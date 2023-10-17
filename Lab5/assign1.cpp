#include <iostream>

using namespace std;

int main() 
{
	double tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 13};
    double sum = 0;

	for (int i = 0; i < 10; i++) {
        sum = sum + tab[i];
    } 
	cout << sum << endl;

	return 0;
}