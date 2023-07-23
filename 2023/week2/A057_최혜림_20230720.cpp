// 2021 07 10
#include <iostream>
using namespace std;

int main() {
    int pay, make, price;
    int sell = 0;
    cin >> pay >> make >> price;

    int add = price - make;

    if (add <= 0) {
        cout << -1 << endl;
    } 
    else {
        sell = pay / add + 1;
        cout << sell << endl;
    }
    return 0;
}