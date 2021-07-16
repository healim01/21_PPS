#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> num;
    int input;
    
    cin >> input;

    for (int i=1; i<=input; i++) num.push_back(i);

    while (num.size() > 1) {
        num.erase(num.begin());
        num.push_back(num[0]);
        num.erase(num.begin());
    }
    cout << num[0] << endl;

    return 0;
}