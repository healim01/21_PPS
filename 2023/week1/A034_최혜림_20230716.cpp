#include <iostream>
using namespace std;

int main() {
    int num;
    int left[10];
    int same[10] = {0};
    int count = 0;

    for (int i=0; i<10; i++) {
        cin >> num;
        left[i] = num%42;
    }
    for (int i=0; i<10; i++) {
        for (int j=i+1; j<10; j++) {
            if (left[i] == left[j]) {
                count++;
                break;
            }
        }
    }

    cout << 10 - count << endl;
}