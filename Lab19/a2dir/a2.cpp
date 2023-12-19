/*
Napisz program który obliczy sumę liczb typu float zapisanych w pliku tekstowym o nazwie liczby.txt.
Każda liczba jest w osobnej linii, nie wiemy ile jest liczb. Napisz też obsługę błędów, gdyby nie powiodła się próba odczytu z pliku.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    fstream file;
    
    file.open("liczby.txt", ios::in);

    if (file.good() == false) {
        cout << "File cannot be opened.";
        return 1;
    }

    return 0;
}