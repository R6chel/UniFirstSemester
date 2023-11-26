#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
   
    do {
        cout << "Enter string: ";
        cin >> word;
    } while(word.length() > 6);

    int number = stoi(word);
    int number2 = number * 3;
    cout << "\"" << word << "\" => " << number << " " << number2 << "\n";
    
    return 0;
}