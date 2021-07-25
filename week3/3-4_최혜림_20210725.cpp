#include <iostream>
using namespace std;

int main() {
    int num;
    int door;
    cin >> num >> door;
    if (num > 5) cout << "Love is open door" << endl;
    else {
        for (int i=2; i<=num; i++) {
            if (door == 1) door = 0;
            else door = 1;
            cout << door << endl;
        }
    }
}