#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    string str[num];

    for (int i=0; i<num; i++) {
        cin >> str[i];
        for (int j=0; j<str[i].length(); j++) {
            if (str[i][j] == 'Z') str[i][j] = 'A';
            else str[i][j] = str[i][j] + 1;
        }
    }

    for (int i=0; i<num; i++) {
        cout << "String #" << i+1 << endl;
        cout << str[i] << endl;
        if (i!=num-1) cout << endl;
    }
}