// 2021 07 07
#include <iostream>
using namespace std;

int main() {
    string input;
    char max_char;
    int max = 0;
    int same = 0;

    cin >> input;
    for (int i=0; i<input.length(); i++) input[i] = toupper(input[i]);
    
    for (int i=0; i<input.length(); i++) {
        int count = 0;
        if (input[i] == max_char) continue;
        for (int j=0; j<input.length();j++) if (input[i] == input[j]) count++;

        
        if (count > max) {
            max_char = input[i];
            max = count;
            same = 0;
        }
        else if (count == max) same = 1;
    }
    
    if (same == 1) cout << "?" << endl;
    else cout << max_char << endl;
}