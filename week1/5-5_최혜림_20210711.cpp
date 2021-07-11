// 2021 07 11
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> str;

    for (int i=1; i<=n; i++) {
        if (i%3==0 && i%5==0) str.push_back("FizzBuzz");
        else if (i%3==0) str.push_back("Fizz");
        else if (i%5==0) str.push_back("Buzz");
        else str.push_back(to_string(i));
    }
    
    return str;
}

int main() {
    int n = 5;
    vector <string> a = fizzBuzz(n);
    cout << a[0] << endl;
}