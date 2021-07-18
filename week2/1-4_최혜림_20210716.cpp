#include <iostream>
using namespace std;

int main() {
    int c = 0;
    int total = 0;
    int avg;
    
    cin >> c;
    int num[c];
    int count[c];

    for (int i=0; i<c; i++) {
        total = 0;
        cin >> num[i];
        int jumsu[num[i]];
        for (int j=0; j<num[i]; j++) {
            cin >> jumsu[j];
            total += jumsu[j];
        }
        avg = total / num[i] * 1.0;

        count[i] = 0;
        for (int j=0; j<num[i]; j++) {
            if (jumsu[j] > avg) count[i]++;
        }
    }

    for (int i=0; i<c; i++) {
        double dd = (count[i] *  100.0) / num[i];
        printf("%.3f%%\n",dd);
    }
}