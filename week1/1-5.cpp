// 2021 07 06
#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    for (int i=0; i<digits.size(); i++) {
        if (digits[i] == "") cout << "yes" << endl;
    }
    return digits;
}

int main() {
    vector <int> n;
    n.push_back(1);
    n.push_back(2);
    n.push_back(3);
 
    vector <int> one = plusOne(n);

    //cout << one[0] << endl;
}