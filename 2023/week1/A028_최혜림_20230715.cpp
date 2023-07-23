#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

char ret[10005];
char A[10001];
char B[10001];
char temp[10001];

void reverseChar(char* str)
{
	for (int i = 0; i < strlen(str) / 2; i++)
	{
		char temp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = temp;
	}
}


int main() {
    cin >> A >> B;

	reverseChar(A);
	reverseChar(B);

	for (int i = 0; (i < strlen(A))|(i<strlen(B)); i++) {
		int temp_a = A[i] - '0';
		int temp_b = B[i] - '0';
		if (temp_a < 0) temp_a = 0;
		if (temp_b < 0) temp_b = 0;
		int sum = temp_a + temp_b;

		if (sum > 9) {
			if (strlen(B) > strlen(A)) {
				if (i == strlen(B) - 1) {
					ret[i + 1] = '1';
				}
				else {
					B[i + 1]++;
				}
			}
			else {
				if (i == strlen(A) - 1) {
					ret[i + 1] = '1';
				}
				else {
					A[i + 1]++;
				}
			}
		}

		sum %= 10;
		ret[i] = sum + '0';
	}

	reverseChar(ret);
    cout << ret << endl;
}
