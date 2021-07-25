#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int h, s;
    vector <string> hear;
    vector <string> see;
    vector <string> never;

    cin >> h >> s;
    for (int i=0; i<h; i++) {
        string hh;
        cin >> hh;
        hear.push_back(hh);
    }
    for (int i=0; i<s; i++) {
        string ss;
        cin >> ss;
        see.push_back(ss);
        for (int j=0; j<h; j++) {
            if (hear[j]==ss) never.push_back(hear[j]);
        }
    }

    cout << never.size() << endl;
    sort(never.begin(), never.end());
    for (int i=0; i<never.size(); i++) cout << never[i] << endl;
}