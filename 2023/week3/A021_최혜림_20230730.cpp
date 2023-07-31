#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    string word[input.size()];

    for (int i=0; i<input.size(); i++) {
        for (int j=i; j<input.size(); j++) word[i] += input[j];
    }

    sort(word, word+input.size());

    for (int i=0; i<input.size(); i++) cout << word[i] << endl;
}
