#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    vector <int> N;
    vector <int> M;

    cin >> n;
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        N.push_back(a);
    }
    cin >> m;
    for (int i=0; i<m; i++) {
        int a;
        cin >> a;
        M.push_back(a);
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (M[i] == N[j]) {
                cout << 1 << endl;
                break;
            }
            else if (j==n-1) cout << 0 << endl;
        }
    }
}