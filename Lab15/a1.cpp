//Napisać funkcję, która na końcu listy jednokierunkowej zawierającej liczby całkowite, dopisuje element zawierający największą wartość z listy. Wyświetl listę przed wywołaniem funkcji i po.
#include <iostream>
using namespace std;

// Structure for a node in the linked list
struct Node {
    char sign;
    int number;
    Node* next;
};

// Function to append an element containing the sum
void appendSum(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        cout << "List is empty or contains only one element." << endl;
        return;
    }

    char firstSign = head->sign;
    int sum = 0;

    Node* temp = head;
    while (temp != nullptr) {
        if (temp->sign == firstSign) {
            sum += temp->number;
        }
        temp = temp->next;
    }

    // Creating the new node with the sum
    Node* newNode = new Node();
    newNode->sign = firstSign;
    newNode->number = sum;
    newNode->next = nullptr;

    // Appending the new node at the end of the list
    temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << "(" << temp->sign << ", " << temp->number << ") -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Example list: (s, 2) -> (s, 5) -> (t, 3) -> (s, 4)
    Node* head = new Node();
    head->sign = 's';
    head->number = 2;

    Node* second = new Node();
    second->sign = 's';
    second->number = 5;
    head->next = second;

    Node* third = new Node();
    third->sign = 't';
    third->number = 3;
    second->next = third;

    Node* fourth = new Node();
    fourth->sign = 's';
    fourth->number = 4;
    third->next = fourth;
    fourth->next = nullptr;

    cout << "Original list: ";
    displayList(head);

    appendSum(head);

    cout << "After appending sum: ";
    displayList(head);

    return 0;
}