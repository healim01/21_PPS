#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    vector <int> stair;
    int first = 0;
    int max = 0;
    int m = 0;
    cin >> num;
    
    for (int i=0; i<num; i++) {
        int a;
        cin >> a;
        stair.push_back(a);

        if (i==0) first = a;
        else if (stair[i] <= stair[i-1] || i==num-1) {
            if (i==num-1) m = a - first;
            else m = stair[i-1] - first;
            if (m > max) max = m;
            first = a;
        }
    }

    cout << max << endl;     
}
