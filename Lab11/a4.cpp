#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double calcAvg(double* arr, int size) {

    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / size;
}

double* makeArr(int size) {

    double* arr = new double[size];
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < size; ++i) {
        arr[i] = static_cast<double>(rand()) / RAND_MAX * 100.0; 
    }

    return arr;
}

void delArr(double* arr) {

    delete[] arr;
    arr = nullptr;
}

int main() {

    int size = 10;

    double* dArr1 = makeArr(size);
    double avg1 = calcAvg(dArr1, size);
    cout << "average of dArr1: " << avg1 << "\n";
    delArr(dArr1);

    size = 7;
    double* dArr2 = makeArr(size);
    double avg2 = calcAvg(dArr2, size);
    cout << "average of dArr2: " << avg2 << "\n";
    delArr(dArr2);

    return 0;
}