#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
    int num, n = x;
    
    while (1) {
        num += n%10;
        n = n/10;
        if (n==0) break;
    }
    if (x%num==0) return true;
    else return false;
}

int main() {
    cout << solution(11) << endl;
}