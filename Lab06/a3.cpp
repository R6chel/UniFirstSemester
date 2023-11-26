#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string word, prefix;
    cin >> word;
    cin >> prefix;

    bool isPrefix = true;
    if(prefix.length() <= word.length()) {
        for(int i = 0; i < prefix.length(); i++) {
            if (word[i] != prefix[i])
                isPrefix = false;
        }
    }
    else { isPrefix = false; }
    
    if(isPrefix)
        cout << word << " " << prefix << " => TAK" << endl;
    else
        cout << word << " " << prefix << " => NIE" << endl;
    
}