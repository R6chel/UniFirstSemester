#include <iostream>

using namespace std;

void allocateArr(int* TAB, int N) {

    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            TAB[i] = i * 2;
        }
        else {
            TAB[i] = i % 3;
        }
    }
}

int main() {

    int N = 10;
    int* TAB = new int[N];

    allocateArr(TAB, N);

    for (int i = 0; i < N; ++i) {
        cout << TAB[i] << " ";
    }
    cout << "\n";

    delete[] TAB;

    return 0;
}