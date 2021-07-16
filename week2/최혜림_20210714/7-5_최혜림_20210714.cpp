#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool desc(int a, int b){ 
  return a > b; 
} 

int main() {
    vector <int> v;
    int input;
    int i=0;
    cin >> input;

    while (1) {
        v.push_back(input % 10);
        input = input/10;
        i++;
        if (input == 0) break;
    }
    sort(v.begin(), v.end(), desc);

    for (int j=0; j<i; j++) cout << v[j];
}