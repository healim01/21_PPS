// 2021 07 10
#include <iostream>
using namespace std;

int addDigits(int num) {
    int sum = 0;
    while (1) {
        while (1) {
        sum += num%10;
            
        if (num < 10) break;
        num = num/10;
        }
        if (sum < 10) break;
        else {
            num = sum;
            sum = 0;
        }
    }
    return sum;
        
}

int main() {
    int num = 138;
    cout << addDigits(num) << endl;
}
