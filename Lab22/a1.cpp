//a1.cpp
/*
Do przykładu 1 dodaj klasę Kula, która będzie dziedziczyć po klasie Kolo.
Klasa Kula powinna zawierać nowy atrybut string nazwa i nowe metody:
- konstruktor z wykorzystaniem listy inicjalizacyjnej,
- void wyświetl() korzystająca z metody odziedziczonej po klasie Kolo,
  dodatkowo pokazująca objętość kuli.
W funkcji main stwórz obiekt klasy Kula i wywołaj metodę wyświetl.

*/
#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

class Punkt
{
    float x, y;    // wsp�rz�dne punktu
    string nazwa;  // nazwa punktu

public:
    void wyswietl()  // wypisze punkt na ekranie
    {
        cout << nazwa << "(" << x << "," << y << ")" << endl;
    }

    Punkt(string n = "S", float a = 0, float b = 0)  // konstruktor (warto�ci domy�lne)
    {
        nazwa = n;
        x = a;
        y = b;
    }
};

class Kolo :public Punkt //klasa Kolo dziedziczy publicznie z klasy Punkt
{
    float r;        // promie� ko�a
    string nazwa;   // nazwa ko�a

public:
    void wyswietl()
    {
        cout << "Kolo o nazwie: " << nazwa << endl;
        cout << "Srodek kola: " << endl;
        Punkt::wyswietl();  // metoda z klasy dziedziczonej Punkt
        cout << "Promien: " << r << endl;
        cout << "Pole kola: " << M_PI * r * r << endl;
    }

    // konstruktor z wykorzystaniem konstruktora z klasy dziedziczonej Punkt 
    // (lista inicjalizacyjna)
    Kolo(string nk = "Kolko", string np = "S", float a = 0, float b = 0, float pr = 1)
        :Punkt(np, a, b)
    {
        nazwa = nk;
        r = pr;
    }
};

class Kula :public Punkt {
    
        string nazwa;

    public:
        void wyswietl() //- void wyświetl() korzystająca z metody odziedziczonej po klasie Kolo, dodatkowo pokazująca objętość kuli.

}

int main()
{
    Kolo k1;     // stworzenie obiektu klasy Kolo
    k1.wyswietl();

    return 0;
}
