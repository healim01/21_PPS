#include <bitset>

class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> num;
        
        for (int i=0; i<n+1; i++) {
            int a = 0;
            bitset <100> bs(i);
	        string s = bs.to_string();
            
            for (int j=0; j<s.size(); j++) {
                if (s[j]=='1') a++;
            }
            num.push_back(a);
        }
        
        return num;
    }
};