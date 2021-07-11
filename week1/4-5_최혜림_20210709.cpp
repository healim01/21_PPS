// 2021 07 09
class Solution {
public:
    bool isPowerOfFour(int n) {
        while (1) {
            if (n == 1) return true;
            if (n%4 != 0 || n == 0) return false;
            n = n/4;
        }
    }
};