#include <iostream>
using namespace std;

struct Pair {

    char character;
    int num;
    Pair *next;

    Pair(char c, int n) : next(nullptr) {
    character = c;
    num = n;
    }
};

void appendPairWSum(Pair *&first) {

    if (first == nullptr) {
        cout << "list empty.\n";
        return;
    }

    int sum = 0;
    Pair *current = first;

    while (current != nullptr) {
        sum += current->num;
        current = current->next;
    }

    Pair *newPair = new Pair(first->character, sum);

    current = first;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newPair;
}

void printList(Pair *first) {

    Pair *current = first;
    while (current != nullptr) {
        cout << "(" << current->character << ", " << current->num << ") > ";
        current = current->next;
    }
    cout << "nullptr\n";
}

void delList(Pair *&first) {

    Pair *current = first;
    while (current != nullptr) {
        Pair *temp = current;
        current = current->next;
        delete temp;
    }
    first = nullptr;
}

int main() {

    Pair *first = new Pair('A', 16);
    first->next = new Pair('B', 24);
    first->next->next = new Pair('C', 31);

    cout << "list before appending sum: ";
    printList(first);

    appendPairWSum(first);

    cout << "list after appending sum: ";
    printList(first);

    delList(first); 

    return 0;
}