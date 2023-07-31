#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, k;
    vector <int> v;
    cin >> N >> k;

    for (int i=0; i<N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    cout << v[k-1] << endl;
}