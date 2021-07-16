// 2021 07 05
#include <iostream> 
#include <string>
#include <vector>
using namespace std;


int solution(string skill, vector<string> skill_trees) {
    int answer = -1;
    int count = skill_trees.size();

    for (int i=0; i<skill_trees.size();i++) { // 배열 하나씩 
        int num = -1, No = 0;
    
        for (int j=0; j<skill_trees[i].size();j++) { // 단어 하나씩 
            for (int k=0; k<skill.length();k++) { // 비교 skill
                if (skill_trees[i][j] == skill[k]) { 
                    if ((num == k-1) || (num==-1 && k==0)) {
                        num = k;
                        break;
                    }
                    else {
                        No = 1;
                        count--;
                        break;
                    }
                }
            }
            if (No == 1) break;
        }
    }
    answer = count;
    return answer;
}

int main() {
    vector <string> b;
    string a = "CBD";
    b.push_back("BACDE");
    b.push_back("CBADF");
    b.push_back("AECB");
    b.push_back("BDA");

    int c = solution(a,b);
    cout << c << endl;
}
