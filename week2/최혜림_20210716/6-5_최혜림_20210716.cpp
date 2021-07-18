#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int input;
    int no = 0, count = 0;
    cin >> input;
    int num[input];

    for (int i=0; i<input; i++) {
        int a;
        no = 0;
        cin >> a;
        for (int j=0; j<i; j++) {
            if (a == num[j]) {
                no = 1;
                break;
            }
        }
        if (no == 0) {
            num[count] = a;
            count++;
        }
    }

    sort(num, num+count);

    for (int i=0; i<count; i++) cout << num[i] << " ";

}