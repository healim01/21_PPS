#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int max = 0;
    int end = 0;
    int max_num = 0;
        
    for (int i=0; i<nums.size(); i++) {
        int count = 0;
        for (int j=0; j<nums.size(); j++){
            if (nums[i] == nums[j]) count++;
            if (count > nums.size()/2) {
                end = 1;
                break;
            }
        }
        if (count > max) {
            max = count;
            max_num = nums[i];
            if (end == 1) break;
        }
    }

    return max_num;  
}

int main() {
    vector <int> num;
    num.push_back(2);
    num.push_back(2);
    num.push_back(2);
    num.push_back(2);
    num.push_back(2);
    num.push_back(2);
    num.push_back(2);
    for (int i=0; i<100; i++) num.push_back(2);

    cout << majorityElement(num) << endl;
}