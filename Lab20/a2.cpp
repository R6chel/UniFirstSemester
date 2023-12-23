#include <iostream>

using namespace std;

class Pracownik {

private:
    string firstName, lastName, street, houseNo, postCode, por;

public:
    Pracownik(string fName, string lName, string hood, string houseNum, string pCode, string placeofR) {

        firstName = fName;
        lastName = lName;
        street = hood;
        houseNo = houseNum;
        postCode = pCode;
        por = placeofR;
    }

    void displayDetails() {

        cout << "----------------------\n";
        cout << firstName << " " << lastName << "\n";
        cout << "ul. " << street << " " << houseNo << "\n";
        cout << postCode << " " << por << "\n";
        cout << "----------------------\n";
    }
};

int main() {

    string fName = "Carl";
    string lName = "Johnson";
    string hood = "Grove";
    string houseNum = "130";
    string pCode = "95249";
    string placeofR = "Los Santos";

    Pracownik pracownik(fName, lName, hood, houseNum, pCode, placeofR);

    pracownik.displayDetails();

    return 0;
}
