#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string word = "randomStringOfText";
    char arr[30] = {};
    int arrInt[30] = {};

    for(int i = 0; i < word.length(); i++) {
        if(islower(word[i])) {
            for(int j = 0; j < 30; j++) {
                if(arr[j] == 0) {
                    arr[j] = word[i];
                    arrInt[j]++;
                    break;
                }
                else if(arr[j] != word[i]) {
                    continue;
                }
                else if(arr[j] == word[i]) {
                    arrInt[j]++;
                    break;
                }
            }
        }
        
    }
    cout << word <<" -> ";
    for(int i = 0; i < 30; i++) {
        if(arr[i] == 0)
            break;
        cout << arr[i] << " " << arrInt[i] << ", ";
    }
}