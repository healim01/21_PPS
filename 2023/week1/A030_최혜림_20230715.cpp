#include<iostream>
using namespace std;

int main()
{
    int a,b; 
    cin >> a >> b;
    double c,d,e,f; 
    cin >> c >> d >> e >> f;
    double fun[101];
    double sad[101];

    if(b == 1) {
        fun[0] = e;
        sad[0] = f;
    }
    else {
        fun[0] = c;
        sad[0] = d;
    }

    for (int i = 1; i < a; i++) {
        fun[i] = fun[i-1] * c + sad[i-1] * e;
        sad[i] = sad[i-1] * f + fun[i-1] * d;
    }

    int good = fun[a-1] * 10000; 
    int bad = sad[a-1] * 10000; 

    if (good%10 < 5) good /= 10; 
    else good = good/10+1;

    if (bad%10 < 5) bad /= 10; 
    else bad = bad/10+1;

    cout << good << endl << bad << endl;
}