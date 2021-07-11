// 2021 07 06
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string quiz[200] = {};
    int count=0;
    int total=0;

    cin >> num;

    for (int i=0; i<num; i++) {
        cin >> quiz[i];
    }

    for (int i=0; i<num; i++) {
        count = 0;
        total = 0;
        for (int j=0; j<quiz[i].length(); j++) {
            if (quiz[i][j] == 'O') {
                count++;
                total += count;
            }
            else {
                count = 0;
            }
        }
        cout << total << endl;
    }
    return 0;
}