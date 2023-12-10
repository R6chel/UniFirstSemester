#include <iostream>
#include <queue>
using namespace std;

void split(queue<char> &q1, queue<char> &q2, queue<char> &q3) {

    while (!q1.empty()) {
        if (q1.front() >= 'a' && q1.front() <= 'z') {
        q2.push(q1.front());    
        } 
        else if (q1.front() >= '0' && q1.front() <= '9') {
            q3.push(q1.front());
        }
        q1.pop();
        }
    }

void print(queue<char> pq) {

    cout << "queue contents: ";
    while (!pq.empty()) {
        cout << pq.front() << " ";
        pq.pop();
    }
    cout << "\n";
}

int main() {

    queue<char> mergedQueue;
    queue<char> emptyQueue;
    queue<char> emptyQueue2;

    mergedQueue.push('a');
    mergedQueue.push('b');
    mergedQueue.push('1');
    mergedQueue.push('2');
    mergedQueue.push('c');
    mergedQueue.push('3');
    mergedQueue.push('z');
    mergedQueue.push('4');


    split(mergedQueue, emptyQueue, emptyQueue2);
    print(emptyQueue2);
    print(emptyQueue);


    return 0;
}