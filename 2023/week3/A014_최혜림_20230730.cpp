#include <iostream>
#include <vector>
using namespace std;

int main() {
    int all;
    int num;
    int count[2] = {0};
    cin >> all >> num;
    int mem[all];
    vector <int> list;

    for (int i=0; i<all; i++) mem[i] = 1;

    while (1) {
        if (count[1] == all) break;
        count[1] = 0;

        for (int i=0; i<all; i++) {
            if (mem[i] == 1) count[0]++;
            else count[1]++;

            if (count[0] == 3) {
                list.push_back(i+1);
                mem[i] = 0;
                count[0] = 0;
            }
        }
    }

    cout  << "<";
    for (int i=0; i<all; i++) {
        if (i!=all-1) cout << list[i] << ", ";
        else cout << list[i] << ">" << endl;
    }
}