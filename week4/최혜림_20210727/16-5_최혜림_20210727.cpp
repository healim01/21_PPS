class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> num;
        
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                int sum = nums[i] + nums[j];
                
                if (sum == target) {
                    num.push_back(i);
                    num.push_back(j);
                    break;
                }
            }
        }
        
        return num;
        
    }
};