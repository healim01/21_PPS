#include <iostream>
using namespace std;

int main() {
    string input;
    char real;

    cin >> input;

    for (int i=0; i<input.length(); i++) {
        if (input[i] < 'D') real = input[i] + 23;
        else real = input[i] - 3;
        cout << real;
    }
    cout << endl;
}