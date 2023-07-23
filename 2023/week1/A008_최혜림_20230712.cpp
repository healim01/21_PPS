// https://www.acmicpc.net/problem/4344
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m; 
    vector <float> ratio;
    cin >> n; 

    for (int i=0; i<n; i++) {
        cin >> m; 
        int sum=0, count=0;
        vector <int> score;
        for (int j=0; j<m; j++) {
            int a;
            cin >> a;
            score.push_back(a);
            sum += a;
        }
        float avg = sum / m;
        for (int j=0; j<m; j++) {
            if (score[j] > avg) count++;
        }

        ratio.push_back((count*1.0)/m*100);
    }

    for (int i=0; i<n; i++) {
        printf("%.3f%%\n", ratio[i]);
    }
}