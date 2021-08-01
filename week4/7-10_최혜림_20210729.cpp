class Solution {
public:
    #include <vector>
    #include <string>
    
    string reverseParentheses(string s) {
        vector <char> c;
        vector <char> a;
        int YN=0;
        
        for (int i=0; i<s.size(); i++) {
           if (s[i]=='(') {
                if (i!=0 && YN==0) YN=1;
                else YN=0;
            }
            else if (s[i]==')') {
                if (YN==1) YN=0;
                else YN==1;
            }
            else if (YN==1) {
                c.push_back('O');
                a.push_back(s[i]);
            }
            else c.push_back(s[i]);
        }
        
        string ss = "";
        for (int i=c.size()-1, k=0; i>=0; i--) {
            if (c[i] == 'O') {
                ss += a[k];
                k++;
            }
            else ss += c[i];
        }
        return ss;
    }
};