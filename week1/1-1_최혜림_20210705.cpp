// 2021 07 05
#include <iostream>
using namespace std;

int main() {
    int tone[8] = {};
    int a = 0, d = 0;
    for (int i=0; i<8; i++) cin >> tone[i];

    for (int i=0; i<7; i++) {
        if ((tone[i] < tone[i+1]) && (i == 0 || a == 1)) a = 1;
        else if ((tone[i] > tone[i+1]) && (i == 0 || d == 1)) d = 1;
        else {
            a = 0;
            d = 0;
        }
    }
    if (a == 1) cout << "ascending" << endl;
    else if (d == 1) cout << "descending" << endl;
    else cout << "mixed" << endl;
}
