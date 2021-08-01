#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
    return a > b;
}

int main() {
    int N, M;
    vector <int> num;
    cin >> N >> M;

    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        num.push_back(a);
    }

    sort(num.begin(), num.end(), desc);

    int sum, max = 0, a=0;
    while (1) {
        sum = 0;
        int count = 0;
        for (int i=a; i<N; i++) {
            if (sum + num[i] <= M) {
                sum+=num[i];
                count++;
                if (count==3) break;
            }
        }
        if (count < 3) sum = 0;
        else if (sum <= max) break;
        else max = sum;
        a++;
    }
    cout << max << endl;
}