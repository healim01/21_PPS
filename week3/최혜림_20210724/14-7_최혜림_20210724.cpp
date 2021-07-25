#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b) {
    return a.size() < b.size();
}

int main() {
    int num;
    vector <string> word;
    vector <string> v;
    cin >> num;

    for (int i=0; i<num; i++) {
        string a;
        cin >> a;
        word.push_back(a);
    }

    sort(word.begin(), word.end(), compare);

    int size = 0;
    for (int i=0; i<num; i++) {
        if (word[i].size() == size) v.push_back(word[i]);
        else {
            size = word[i].size();

            if (v.size()!=1) {
                sort(v.begin(), v.end());
                for (int j=i-v.size(), k=0; k<v.size(); j++, k++) word[j] = v[k];
                v.clear();
            }
            else v.clear();
            v.push_back(word[i]);
        }

        if (i==num-1) {
            cout << "plz";
            if (v.size()!=1) {
                sort(v.begin(), v.end());
                for (int j=i-v.size(), k=0; k<v.size(); j++, k++) word[j] = v[k];
                v.clear();
            }
        }
    }

    for (int i=0; i<num; i++) {
        if (i!=0 && word[i] == word[i-1]) continue;
        cout << word[i] << endl;
    }
}