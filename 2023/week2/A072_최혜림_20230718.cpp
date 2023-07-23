// 2021 07 11
#include <iostream>
using namespace std;

int dayOfYear(string date) {
    string num[3] = {};
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count=0, days=0, moon=0;

    for (int i=0; i<date.length(); i++) {
        if (date[i] == '-') continue;
        if (i<4) num[0] += date[i];
        else if (i<7) num[1] += date[i];
        else num[2] += date[i];
    }
    
    int year = atoi(num[0].c_str());
    int month = atoi(num[1].c_str());
    int day = atoi(num[2].c_str());

    if (year%4==0) {
      moon = 1;
      if (year%100==0) {
        moon = 0;
        if (year%400==0) moon = 1;
      }
    }
    if (moon==1 && month > 2) days++;

    for (int i=0; i<12; i++) {
        if (i == month-1) break;
        days += months[i];
    }
    days += day;

    return days;     
}

int main() {
    string date = "2004-03-01";
    int day = dayOfYear(date);
    cout << day << endl;
}