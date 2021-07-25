class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int length = 0;
        
        for (int i=size-2; i>0; i--) {
            if (nums[size-1] < nums[i] + nums[i-1]) {
                length = nums[size-1] + nums[i] + nums[i-1];  
                break;
            }
            
            if (i==1 && length==0) {
                size--;
                i += size-2;
            }
        }
        
        return length;
    }
};