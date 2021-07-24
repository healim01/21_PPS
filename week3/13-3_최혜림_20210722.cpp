#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int num;
    int tall;
    vector <int> fruit;

    cin >> num >> tall;
    for (int i=0; i<num; i++) {
        int a;
        cin >> a;
        fruit.push_back(a);
    }
    sort(fruit.begin(), fruit.end());

    for (int i=0; i<num; i++) {
        if (fruit[i] <= tall) tall++;
        else break;
    }
    cout << tall << endl;
}