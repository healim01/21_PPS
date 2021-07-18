#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> cookie) {
    int answer = 0;
    int max = 0;
    int old = 0;
    int young = 0;

    for (int k=0; k<cookie.size(); k++) {
        young = 0;
        old = 0;
        for (int i=k; i<cookie.size(); i++) {
            young = 0;
            old += cookie[i];
            for (int j=i+1; j<cookie.size(); j++) {
                young += cookie[j];
                if (old == young) {
                    if (old > answer) {
                        answer = old;
                    }
                }
                else if (old < young) break;
            }
        }
    }
    return answer;
}

int main() {
    vector <int> c;
    c.push_back(1);
    c.push_back(1);
    c.push_back(2);
    c.push_back(3);
    cout << solution(c) << endl;
}