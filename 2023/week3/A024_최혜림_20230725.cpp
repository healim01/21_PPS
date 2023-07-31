#include <iostream>
#include <vector>
using namespace std;

bool lemonadeChange(vector<int>& bills) {
        int count1=0;
        int count2=0;
        int count3=0;
        for (int i=0; i<bills.size(); i++) {
            if (bills[i] == 5) count1++;
            else {
                if (count1 == 0) return false;
                else if (bills[i] == 20) {
                    if (count1 < 1) return false;
                    else if (count1 < 3 && count2 < 1) return false;
                    else {
                        if (count2 > 1) {
                            count2--;
                            count1--;
                        }
                        else {
                            count1 -= 3;
                        }
                    }
                }
                else if (bills[i] == 10) {
                    count1--;
                    count2++;
                }
            }
        }
        return true;
}

int main() {
    vector <int> b;
    // b.push_back(5);
    // b.push_back(5);
    b.push_back(10);
    b.push_back(10);
    // b.push_back(20);
    cout << lemonadeChange(b)<< endl;
}