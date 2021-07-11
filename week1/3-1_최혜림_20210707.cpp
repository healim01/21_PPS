// 2021 07 07
#include <iostream>
using namespace std;

bool checkRecord(string s) {
    int ab = 0;
    int late = 0;

    for (int i=0; i<s.length(); i++) {
        if (s[i] == 'A') {
            ab++;
            late = 0;
        }
        else if (s[i] == 'L') {
            late++;
            if (late >= 3) return false;
        }
        else late = 0;
    }

    if (ab >= 2) return false;
    else return true;
        
}

int main() {
    string s = "PPALLP";
    bool yn = checkRecord(s);
    if (yn == 1) cout << "true" << endl;
    else cout << "false" << endl;
}