class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = 0;
        
        if (s.size() > t.size()) return false;
        
        for (int i=0; i<s.size(); i++) {
            if (n == t.size()) return false;
            for (int j=n; j<t.size(); j++) {
                cout << s[i] << "  " << t[j] << endl;
                if (s[i] == t[j]) {
                    n = j+1;
                    break;
                }
                else if (j==t.size()-1) return false;
            }
        }
        
        return true;  
    }
};