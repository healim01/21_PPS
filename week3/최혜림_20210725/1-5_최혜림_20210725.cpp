class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = digits.size()-1;
        
        while (1) {
            if (digits[c] == 9) {
                digits[c] == 0;
                if (c-1 >= 0) c--;
                else {
                    digits.insert(digits.begin(), 1);
                    break;
                }
            }
            else {
                digits[c]++;
                break;
            }
            
        }
        
        return digits;
        
    }
};