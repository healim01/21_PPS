#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

bool desc(int a, int b){ 
  return a > b; 
} 

string solution(string number, int k) {
    string answer = "";
    int result = 0;
    vector <int> v;

    for (int i=0; i<number.length() - k; i++) {
        v.push_back(number[i]-48);
    }
    sort(v.begin(), v.end(),desc);

    for (int i=0; i<k; i++) {
        result = result * 10 + v[i];
    }
    answer = to_string(result);
    return answer;
}