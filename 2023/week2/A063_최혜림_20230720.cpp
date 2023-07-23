// 2021 07 09
#include <iostream>
using namespace std;

int addNum(int k, int n) {
    if (n == 1) return 1;
    if (k == 0) return n;
    return (addNum(k-1, n) + addNum(k, n-1));
}

int main() {
    int num;
    int k[] = {};
    int n[] = {};
    int total[] = {};

    cin >> num;

    for (int i=0; i<num; i++) {
        cin >> k[i] >> n[i];
        total[i] = addNum(k[i], n[i]);
    }

    for (int i=0; i<num; i++) cout << total[i] << endl;
}