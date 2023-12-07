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

void appendMaxNode(Node* head) {

    if (head == nullptr) {
        cout << "list empty\n";
        return;
    }

    Node* current = head;
    int maxVal = current->num;

    while (current != nullptr) {
        if (current->num > maxVal) {
            maxVal = current->num;
        }
        current = current->next;
    }

    Node* newNode = new Node(maxVal);

    current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

void dispList(Node* head) {

    Node* current = head;
    while (current != nullptr) {
        cout << current->num << " ";
        current = current->next;
    }
    cout << "\n";
}

int main() {

    Node* head = new Node(6);
    head->next = new Node(14);
    head->next->next = new Node(8);
    head->next->next->next = new Node(18);

    cout << "list before appending max value: ";
    dispList(head);

    appendMaxNode(head);

    cout << "list after appending max value: ";
    dispList(head);

    return 0;
}