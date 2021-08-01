class Solution {
public:
    int romanToInt(string s) {
        int a[s.size()];
        int total = 0;
        char rom[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int val[7] = {1, 5, 10, 50, 100, 500, 1000};
        
        for (int i=0; i<s.size(); i++) {
            for (int j=0; j<7; j++) {
                if (s[i] == rom[j]) {
                    if (i!=0 && val[j] > a[i-1]) a[i] = val[j] - 2*a[i-1];
                    else a[i] = val[j];
                }
            }
            total += a[i];
        }
        
        return total;  
    }
};