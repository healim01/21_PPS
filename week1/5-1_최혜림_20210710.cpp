// 2021 07 10
#include <iostream>
using namespace std;

int main() {
    int N, M;
    int total = 1, count = 0;

    cin >> N >> M;

    while (1) {
        if (total == N*M) break;
        total = total * 2 - (count);
        count++;
    }
    cout << count << endl;
}