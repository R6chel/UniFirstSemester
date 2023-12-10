#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> pq) {

    cout << "queue contents: ";
    while (!pq.empty()) {
        cout << pq.front() << " ";
        pq.pop();
    }
    cout << "\n";
}

queue<int> merge(const queue<int>& q1, const queue<int>& q2) {

    queue<int> output = q1;

    queue<int> temp_q2 = q2; 

    while (!temp_q2.empty()) {
        output.push(temp_q2.front());
        temp_q2.pop();
    }

    return output;
}

int main() {

    queue<int> A;
    A.push(10);
    A.push(20);
    A.push(30);

    queue<int> B;
    B.push(40);
    B.push(50);
    B.push(60);

    queue<int> C = merge(A, B);

    print(C);

    return 0;
}