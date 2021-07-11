// 2021 07 11
#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    string no = "~!@#$%^&*()<>-_+=:;,./[]{}|?\"\'` ";
    for (int i=0; i<no.length(); i++) {
        s.erase(remove(s.begin(), s.end(), no[i]), s.end());
    }
    
    for (int i=0; i<s.length(); i++) {
        char c1 = tolower(s[i]);
        char c2 = tolower(s[s.length()-i-1]);
        cout << c1 << "  " << c2 << endl;
        if (c1 != c2) return false;
    }
    return true;
}

int main() {
    string s = "`l;`` 1o1 ??;l`";
    cout << isPalindrome(s) << endl;

}