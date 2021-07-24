#include <iostream>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    int coin[n];
    int count = 0;

    for (int i=0; i<n; i++) cin >> coin[i];
    for (int i=n-1; i>=0; i--) {
        if (k == 0) break;
        if (coin[i] <= k) {
            int c = k / coin[i];
            k -= c * coin[i];
            count += c;
        }
    }
    cout << count << endl;
}