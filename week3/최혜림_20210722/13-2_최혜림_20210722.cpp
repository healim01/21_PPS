#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector <int> num;
    vector <char> sign;
    int minus = 0, plus = 0;
    int pm = 0;
    string ve;
    string math;

    cin >> math;

    for (int i=0; i<math.length(); i++) {
        if (math[i] >= '0' && math[i] <= '9') ve += math[i];
        
        if (math[i]=='-' || math[i]=='+' || i==math.length()-1) {
            num.push_back(stoi(ve));
            if (i!=math.length()-1) sign.push_back(math[i]);
            ve = "";
        }
    }

    plus = num[0];
    for (int i=0; i<sign.size(); i++) {
        if (sign[i] == '-') {
            pm = 1;
        }

        if (pm == 1) {
            minus += num[i+1];
        }
        else plus += num[i+1];
    }
    cout << plus - minus << endl;
}