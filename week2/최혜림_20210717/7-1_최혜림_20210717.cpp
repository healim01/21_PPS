#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector < pair <int, string> > v;
    int num; 
    int age;
    string name;
    cin >> num;


    for (int i=0; i<num; i++) {
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    sort(v.begin(), v.end());

    for (int i=0; i<num; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
}