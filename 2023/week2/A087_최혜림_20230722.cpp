#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    string num[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num1, num2;
    vector < pair <string, int> > v;
    cin >> num1 >> num2;

    for (int i=num1; i<=num2; i++) {
        string name = "";
        if (i>9) name = num[i/10] + " ";
        name +=  num[i%10];
        v.push_back(make_pair(name, i));
    }

    sort(v.begin(), v.end());
    
    for (int i=0; i<(num2-num1+1); i++) {
        cout << v[i].second << " " ;
        if ((i+1)%10==0) cout << endl;
    }
}