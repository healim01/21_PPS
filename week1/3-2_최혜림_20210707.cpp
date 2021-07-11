// 2021 07 07
#include <iostream>
using namespace std;

int main() {
    string input;

    cin >> input;

    for (int i=0; i<input.length(); i++) {
        cout << input[i];
        if ((i+1)%10==0) cout << endl;
    }
}