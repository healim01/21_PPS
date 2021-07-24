#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    int count=0;
    int done=0;
    vector <int> in;
    vector <int> out;
    cin >> num;

    for (int i=0; i<num; i++) {
        int a;
        cin >> a;
        in.push_back(a);
        out.push_back(0);
    }

    while (1) {
        for (int i=0; i<num; i++) {
            if (in[i] != out[i]) {
                for (int j=i; j<num; j++) {
                    if (out[j]==0) out[j]=1;
                    else out[j]=0;

                    if (j==i+2) break;
                }
                count++;
            }
        }
        if (done == count) break;
        done = count;
    }

    cout << count << endl;
}