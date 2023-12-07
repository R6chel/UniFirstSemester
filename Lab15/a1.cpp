#include <iostream>
using namespace std;

struct Node {

    int num;
    Node* next;

    Node(int value) {
        num = value;
        next = nullptr;
    }
};

void appendMaxNode(Node* first) {

    if (first == nullptr) {
        cout << "list empty\n";
        return;
    }

    Node* current = first;
    int maxVal = current->num;

    while (current != nullptr) {
        if (current->num > maxVal) {
            maxVal = current->num;
        }
        current = current->next;
    }

    Node* newNode = new Node(maxVal);

    current = first;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

void dispList(Node* first) {

    Node* current = first;
    while (current != nullptr) {
        cout << current->num << " ";
        current = current->next;
    }
    cout << "\n";
}

int main() {

    Node* first = new Node(6);
    first->next = new Node(14);
    first->next->next = new Node(8);
    first->next->next->next = new Node(18);

    cout << "list before appending max value: ";
    dispList(first);

    appendMaxNode(first);

    cout << "list after appending max value: ";
    dispList(first);

    return 0;
}