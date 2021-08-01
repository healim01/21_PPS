#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    int no;
    int now = 100;
    cin >> N;
    cin >> no;
    int cha[no];
    int num[sizeof(N)];

    for (int i=0; i<no; i++) cin >> cha[i];
    for (int i=0, n = N; i<sizeof(N); i++, n = n/10) num[i] =  n%10;

    while (1) {
        if (now == N) break;
        for (int i=0; i<sizeof(N); i++) {
            for (int j=0; j<no; j++) {
                if (num[i] != cha[no])
            }
        }
    }   
}