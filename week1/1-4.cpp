#include <iostream>
using namespace std;

int main() {
    int c = 0;
    int num[] = {};
    int total[] = {};
    int avg[] = {};
    
    cin >> c;

    for (int i=0; i<c; i++) {
        cout << "num" << endl;
        cin >> num[i];
        int jum[i][num[i]];
        for (int j=0; j<num[i]; j++) {
            cout << "jum " << num[i] << endl;
            cin >> jum[i][j];
            total[i] += jum[i][j];
        }
        avg[i] = total[i] / num[i];
    }

    for (int i=0; i<c; i++) {
        cout << "??" << endl;
        int count = 0;
        for (int j=0; j<num[i]; j++) {
            cout << "hy" << endl;
            //if (jum[i][j] > avg[i]) count++;
        }
        cout << (count / num[i])*100 << "%" << endl;
    }
}