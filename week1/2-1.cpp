#include <iostream>
using namespace std;

int main() {
    string vo = "aeiou";
    string input[] = {};
    int a[] = {}, count = 0;

    while (1) {
        int vo_c = 0, co_c = 0;
        int vovo = 0, vo_in = -1;

        cin >> input[count];
        if (input[count] == "end") break;
        // cout << "input !!!!!!!!! " << input[count] << " " << count << endl;

        for (int i=0; i<input[count].length(); i++) {
            // cout << "!!!!!!!!!!!!!!!!!: " << input[count][i] << endl;
            for (int j=0; j<5; j++) { // 모음
                //cout << "vo[j]  : " << vo[j] <<  endl;
                if (input[count][i] == vo[j]) {
                    vovo = 1;
                    co_c = 0;
                    if (vo_c == 2) { // 3번 모음 
                        vo_c = 3;
                        //cout << "3번" << endl;
                        break;
                    }
                    else if (vo_in == j && j != 1 && j != 3) { // 같은거 2번 
                        vo_c = 3; 
                        //cout << "same" << endl;
                        break;
                    }
                    else {
                        //cout << "else" << endl;
                        vo_c++;
                        vo_in = j;
                    }
                }
            }
            if (vovo==0) {
                //cout << "vovo = 0 "<< endl;
                if (i!=0 && input[count][i] == input[count][i-1]) {
                    co_c = 3;
                    //cout << "same momo" << endl;
                    break;
                }
                co_c++;
                vo_c = 0;
            }
            if (vo_c > 2) break;
            if (co_c > 2) break;
            vovo = 0;
        }
        if (vo_c > 2 || co_c > 2 || input[count].length() == co_c) a[count] = 1;
        else a[count] = 0;
        cout << "input :" << input[count] << endl;
        count++;
    }

    for (int i=0; i<count; i++) {
        cout << i << endl;
        if (a[i] == 1) cout << "<" << input[i] << " > is not acceptable." << endl;
        else cout << "<" << input[i] << "> is acceptable." << endl;
    }

    cout << "???" << endl;

    return 0;
}