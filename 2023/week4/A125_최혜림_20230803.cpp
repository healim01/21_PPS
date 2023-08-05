#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long loap[100001];
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> loap[i];
    }
    sort(loap, loap + n); // 오름차순 정렬
    long long most = 0;
    for (int i = 0; i < n;i++){
        if(most < loap[i]*(n-i)){ 
            most = loap[i]*(n-i); // (자기가 들 수 있는 최대 용량)*
(자기보다 큰 용량의 로프의 개수 + 자신) 
        }
    }
    cout << most;
    return 0;
}
