#include <iostream>
using namespace std;

int main() {
    int num;
    int n;
    cin >> num;

    if (num%5==0) n = num/5;
    else if (num%5==1) {
        n = 2;
        num -= 6;
        n += num / 5;
    }
    else if (num%5==3) {
        n = num/5;
        n += (num%5)/3;
    }
    else if (num%5==4 && (num%5)%3==1 && num/5 >= 1) {
        n = 3;
        num -= 9;
        n += num /5;
    }
    else if (num%3==0) {
        n = num/3;
    }
    else n = -1;

    cout << n << endl;
}