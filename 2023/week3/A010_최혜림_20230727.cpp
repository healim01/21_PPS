#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    vector <int> sum;
    vector <int> fin;

    for (int i=0; i<nums.size(); i++) {
        for (int j=i; j<nums.size(); j++) {
            for (int k=j; k<nums.size(); k++) {
                if (i != j && j != k && i != k) {
                    sum.push_back(nums[i] + nums[j] + nums[k]);
                }
            }
        }
    }

    for (int i=0; i<sum.size(); i++) {
        int count = 0;
        int YN = 0;
        for (int j=1; j<=sum[i]; j++) {
            if (sum[i]%j==0) count++;
        }
        if (count < 3) fin.push_back(sum[i]);
    }

    return fin.size();
}

int main() {
    vector <int> n;
    n.push_back(1);
    n.push_back(2);
    n.push_back(7);
    n.push_back(6);
    n.push_back(4);
    cout << solution(n) << endl;
}