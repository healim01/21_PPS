#include <iostream>
#include <vector>
using namespace std;

int main() {
    string song[14] = {"baby", "sukhwan", "tururu", "turu", "very", "cute", "tururu", "turu", "in", "bed", "tururu", "turu", "baby", "sukhwan"};
    int num=0, fin=0;
    int again = 0;
    cin >> num;

    for (int i=0; i<num; i++) {
        if (i%14==0) {
            again++;
        }
    }
    num--;

    if (song[num%14] == "tururu") {
        if (again < 4) {
            cout << song[num%14];
            for (int i=1; i<again; i++) cout << "ru";
            cout << endl;
        }
        else cout << "tu+ru*" << again+1 << endl;
    }
    else if (song[num%14] == "turu") {
        if (again < 5) {
            cout << song[num%14];
            for (int i=1; i<again; i++) cout << "ru";
            cout << endl;
        }
        else {
            cout << "tu+ru*" << again << endl;
        }
    }
    else cout << song[num%14] << endl;
}