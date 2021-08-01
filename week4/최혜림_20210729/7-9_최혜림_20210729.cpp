class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        for (int i=0; i<s.size(); i++) {
            int YN = 0;
            //cout << i << " " << s << endl;
            for (int j=1; j<k; j++) {
                if (s.size()-i < k) break;
                if (s[i] == s[j+i]) YN=1;
                else YN=0;
            }
            
            if (YN==1) {
                //cout << s[i] << endl;
                s.erase(i,k);
                i = -1;
            }
        }
        
        return s;
    }
};