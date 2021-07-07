#include <iostream>
#include <string>
using namespace std;

int main() {
    string input[200] = {};
    int a[] = {};
    int count = 0;
    int vo_c = 0, co_c = 0;
    int vovo = 0, vo_in = -1;

    while (1) {
        vo_c = 0;
        co_c = 0;
        vovo = 0;
        vo_in = -1;

        cin >> input[count];
        if (input[count] == "end") break;

        for (int i=0; i<input[count].length(); i++) {
            for (int j=0; j<5; j++) { // 모음
            string vo = "aeiou";
                if (input[count][i] == vo[j]) {
                    vovo = 1;
                    co_c = 0;
                    if (vo_c == 2) { // 3번 모음 
                        vo_c = 3;
                        break;
                    }
                    else if (vo_in == j && j != 1 && j != 3) { // 같은거 2번 
                        vo_c = 3; 
                        break;
                    }
                    else {
                        vo_c++;
                        vo_in = j;
                        break;
                    }
                }
            }
            if (vovo==0) {
                if (i!=0 && input[count][i] == input[count][i-1]) {
                    co_c = 3;
                    break;
                }
                co_c++;
                vo_c = 0;
                vo_in = 0;
            }

            if (vo_c > 2) {
                break;
            }
            if (co_c > 2) {
                break;
            }
            vovo = 0;
        }
        if (vo_c > 2 || co_c > 2 || input[count].length() == co_c) a[count] = 1;
        else a[count] = 0;
        count++;
    }

    for (int i=0; i<count; i++) {
        if (a[i] == 1) cout << "<" << input[i] << "> is not acceptable." << endl;
        else cout << "<" << input[i] << "> is acceptable." << endl;
    }
}