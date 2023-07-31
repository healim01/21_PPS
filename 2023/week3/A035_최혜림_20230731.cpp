#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    int num;
    vector < pair <int, int> > v;
    cin >> num;
    
    for (int i=0; i<num; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    for (int i=0; i<num; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
}