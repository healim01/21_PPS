class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> score;
        for (int i=0; i<ops.size(); i++) {
            if (ops[i]=="+") {
                int a = score[score.size()-2] + score[score.size()-1];
                score.push_back(a);
            }
            else if (ops[i]=="D") {
                int a = score[score.size()-1] * 2;
                score.push_back(a);
            }
            else if (ops[i]=="C") {
                score.pop_back();
            }
            else score.push_back(stoi(ops[i]));
        }
        
        int total = 0;
        for (int i=0; i<score.size(); i++) {
            total += score[i];
        }
        
        return total;
    }
};