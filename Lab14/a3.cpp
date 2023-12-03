#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int loans;
};

void displayBookTitles(Book books[], int size) {
    cout << "All book titles:\n";
    for (int i = 0; i < size; ++i) {
        cout << books[i].title << " by " << books[i].author << "\n";
    }
    cout << "\n";
}

void displayAvailableBooks(Book books[], int size) {

    cout << "Available Books (Not Borrowed):\n";
    for (int i = 0; i < size; ++i) {
        if (books[i].loans == 0) {
            cout << books[i].title << " by " << books[i].author << "\n";
        }
    }
    cout << "\n";
}

int main() {

    const int arraySize = 4;
    Book books[arraySize] = { 

        {"Look Back", "Tatsuki Fujimoto", 2}, 
        {"Smoking Behind the Supermarket with You", "Jinushi", 1}, 
        {"12 Rules for Life", "Jordan B Peterson", 1}, 
        {"The Layman's Guide to Tax Evasion", "Henry Holzer", 0}, 
    };

    displayBookTitles(books, arraySize);
    displayAvailableBooks(books, arraySize);

    return 0;
}