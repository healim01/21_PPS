#include <iostream>
using namespace std;

int main() {
    int jum[5][4];
    int total = 0;
    int max = 0 ;
    int max_num = 0;

    for (int i=0; i<5; i++) {
        total = 0;
        for (int j=0; j<4; j++) {
            cin >> jum[i][j];
            total += jum[i][j];
        }
        if (total > max) {
            max_num = i;
            max = total;
        }
    }

    cout << max_num+1 << " " << max << endl;
}