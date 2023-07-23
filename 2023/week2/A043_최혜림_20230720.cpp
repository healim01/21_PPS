// 2021 07 06
#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    char same[strs[0].size()];
    int index[strs[0].size()];
    for (int i=0; i<strs.size(); i++) {
        for (int j=0; j<strs[0].size(); j++) {
            if (i==0) {
                same[j] = strs[i][j];
                index[j] = 1;
            }
            else {
                if (index[j] != -1 && same[j] == strs[i][j]) index[j] = 1;
                else index[j] = -1;
            }
        }
    }
    string result = "";
    for (int i=0; i<strs[0].size();i++) {
        if (index[i] == 1) result += strs[0][i];
        else break;
    }
    return result;
}

int main() {
    vector<string> strs;
    strs.push_back("flower");
    strs.push_back("flushr");
    strs.push_back("flishr");

    string an = longestCommonPrefix(strs);
    cout << an << endl;
}