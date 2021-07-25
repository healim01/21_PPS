#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    vector <string> name;
    cin >> n;

    for (int i=0; i<n; i++) {
        string a;
        cin >> a;
        name.push_back(a);
    }

    for (int i=0; i<n; i++) {
        int joy = name[i].size()-1;
        int first=0;
        for (int j=0; j<name[i].size(); j++) {
            if (j==name[i].size()-1 && first == joy) joy -= name[i].size()-2;
            joy += name[i][j] - 'A';
            if (name[i][j] > 'N') {
                joy -= (name[i][j] - 'N')*2;
            }
            if (j==0) first = joy;
            if (j==name[i].size()-1 && name[i][j]=='A') joy--;
        }
        cout << joy << endl;
    }
}

