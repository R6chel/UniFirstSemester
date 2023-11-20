PRZYKLAD 1:

#include <iomanip>
using namespace std;

void makeX(int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i + j == n - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}

int main() {
	
	int n;

	while (true) {
		cout << "enter a natural odd num: ";
		cin >> n;

		if (n % 2 == 0 || n <= 0) {
			cout << "Niepoprawne dane\n";
			continue;
		}
		makeX(n);
	}

	
	return 0;
}

#include <iomanip>
using namespace std;

PRZYKLAD 2:

void ones(string ciag, int n) {

	int jedynki = 0;
	
	cout << "[";
	for (int i = 0; i <= n; i++) {
		if (ciag[i] == '1')
			jedynki++;
		else if ((ciag[i] != '1') && (jedynki != 0)) {
			if (i < n - 1)
				cout << jedynki << ",";
			else
				cout << jedynki;

			jedynki = 0;
		}
	}
	cout << "]";
}

int main() {
	string ciag;

	cout << "Podaj ciag skladajacy sie z 0 i 1: ";
	cin >> ciag;

	int n = ciag.size();

	ones(ciag, n);

	return 0;
}



PRZYKLAD 3:

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double pi = M_PI;
	int n;

	cout << "Podaj liczbe naturalna: ";
	cin >> n;

	cout << fixed;
	cout << setprecision(n) << pi;

	return 0;
}



PRZYKLAD 4:

#include <iostream>
using namespace std;

void makeStr(string str) {
	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j <= i; i++)
			cout << str[i];
	}
}

int main() {
	string ciag;

	cout << "podaj ciag znakow: ";
	cin >> ciag;

	makeStr(ciag);

	return 0;
}


#include <iostream>
using namespace std;

int fun(int tab[], int n) {
	int suma = 0;

	for (int i = 0; i < n; i++) {
		if (tab[i] % 2 == 0) 
			suma += tab[i]
	}

	return suma;
}

int main() {
	int n;

	cout << "Podaj rozmiar tablicy: ";
	cin >> n;

	int tab[200];

	cout << "Podaj elementy tablicy: \n";
	for (int i = 0; i < n; i++)
		cin >> tab[i];

	int suma = fun(tab, n);
	cout << "Suma parzystych elementow tablicy: " << suma << "\n";

	return 0;
}



PRZYKLAD 5:

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	int tab[100][100], n;
	int suma = 0;

	cout << "Podaj rozmiar tablicy: ";
	cin >> n;

	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			tab[i][j] = rand() % 10;
			cout << tab[i][j] << " ";

			if (i == j)
				suma += tab[i][j];
		}
		cout << "\n";
	}

	cout << "\n" << "suma elementow na lewej przekatnej: " << suma << "\n";

	return 0;
}



PRZYKLAD 6:
#include <iostream>
using namespace std;

void makearr(int tab[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab[i][0] = i;
			tab[i][1] = i + i;
			tab[i][2] = i * i;
			tab[i][3] = i + 3;
			tab[i][4] = i - 4;

		}
	}
}

int main() {

	int nums[10][10]{ 0 };

	makearr(nums);

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << nums[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}



PRZYKLAD 7:

#include <iostream>
using namespace std;

int main() {

	enum myEnum {
		enumName1 = 1,
		enumName2 = 2,
		enumName3,
		enumName4 = 7,
		enumName5,
		enumName6 = 5,
		enumName7 = 3,
		enumName8 = enumName4 + 2
	};

	return 0;
}



PRZYKLAD 8:

#include <iostream>
using namespace std;

int main() {
	enum year { Jan, Feb, Mar, Apr, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

	int i;

	for (int i = Jan; i <= Dec; i++)
		cout << i << " ";
	cout << "\n";

	enum kolory { czerwony = 5, czarny };
	enum karty { kier, karo = 8, pik = 3, trefl };

	cout << "wartosci enuma kolory: " << czerwony << ", " << czarny << "\n";
	cout << "wartosci enuma karty: " << kier << ", " << karo << ", " << pik << ", " << trefl << "\n";

	return 0;
}



PRZYKLAD 9:

#include <iostream>
using namespace std;

int main() {
	enum poryRoku { wiosna, lato, jesien, zima };

	poryRoku teraz = jesien;

	switch (teraz) {

	case wiosna:
		cout << "cieplo\n";
		break;
	case lato:
		cout << "goraco\n";
		break;
	case jesien:
		cout << "deszcz\n";
		break;
	case zima:
		cout << "zimno\n";
		break;
	}

	return 0;
}



PRZYKLAD 10:

#include <iostream>
using namespace std;

	enum rodzina {
		mama = 0,
		tata = 1,
		brat = 2,
		babcia,
		wujek
	};

	int sumaLiczbEnuma() {
		
		return rodzina(mama) + rodzina(tata) + rodzina(brat) + rodzina(babcia) + rodzina(wujek);
	}

	int main() {
		
		cout << sumaLiczbEnuma() << "\n";

	return 0;
}



PRZYKLAD 11:

#include <iostream>
using namespace std;

enum kierunki {
	polnoc = 0,
	poludnie = 1,
	wschod,
	zachod
};

kierunki fun1(kierunki n) {

	return n;
}

kierunki fun2(kierunki& n) {
	
	return n;
}

int main() {
	
	kierunki kierunek1 = fun1(zachod);
	kierunki kierunek2 = fun2(kierunek1);

	cout << kierunek1 << " " << kierunek2 << "\n";
	
	return 0;
}



PRZYKLAD 12:

#include <iostream>
using namespace std;

int main() {

	return 0;
}