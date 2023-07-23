#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int num;
    vector <char> last;
    set <char> select;
    int count=1;
    cin >> num;

    for (int i=0; i<num; i++) {
        string name = "";
        cin >> name;
        last.push_back(name[0]);
    }

    sort(last.begin(), last.end());

    for (int i=0; i<num; i++) {
        if (i!=0 && last[i] == last[i-1]) count++;
        else count = 1;

        if (count >= 5) {
            select.insert(last[i-1]);
            count = 1;
        }
    }
    
    if (select.size() == 0) cout << "PREDAJA";
    else {
        set<char>::iterator iter;
        for (iter = select.begin(); iter != select.end(); iter++){
            cout << *iter;
        }
    }
}