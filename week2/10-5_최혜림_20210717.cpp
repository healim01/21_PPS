#include <iostream>
using namespace std;

string solution(int a, int b) {
    int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int day = b;
    
    for (int i=0; i<a-1; i++) day += month[i];
    cout << day << endl;
    
    int days = day%7;
    if (days == 0) return "THU";
    else if (days == 1) return "FRI";
    else if (days == 2) return "SAT";
    else if (days == 3) return "SUN";
    else if (days == 4) return "MON";
    else if (days == 5) return "TUE";
    else if (days == 6) return "WED";
}

int main() {
    cout << solution(5,24) << endl;
}