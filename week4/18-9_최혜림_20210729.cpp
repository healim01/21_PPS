class Solution {
public:
    string intToRoman(int num) {
        string roman = "";
        int n[7] = {0};
        string rom[7] = {"I", "V", "X", "L", "C", "D", "M"};
        int val[7] = {1, 5, 10, 50, 100, 500, 1000};
        
        for (int i=6; i>=0; i--) {
            if (num >= val[i]) {
                n[6-i] = num / val[i];
                num = num % val[i];
            }
            
            if (num >= val[i]*0.9 && i%2==0 && i != 0) {
                n[6-i+2] = num / val[i-2];
                num = num % val[i-2];
            }
        }
        
        for (int i=0; i<7; i++) {
            if (n[i] == 4) roman += rom[6-i] + rom[6-i+1];
            else if (n[i] == 9) roman += rom[6-i] + rom[6-i+2];
            else {
                for (int j=0; j<n[i]; j++) roman += rom[6-i];
            }
        }
        return roman;
    }
};