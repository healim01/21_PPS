#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    string input;
    cin >> input;

    char c;
    int index = 0;
    int score = 0;
    int i = 0; 
    vector< vector<int> > board(12, vector<int>(4, 0));
    int tries = 0;
 
    for (i = 0; i < input.size(); i++) { 
        if (input.at(i) == 'S') {
            board[index][0] = 10;
            board[index][1] = 0;
            board[index][2] = 10;
            board[index][3] = 1;
            index++;
            tries = 0;
 
        }
        else if (input.at(i) == 'P') {
 
            board[index][1] = 10 - board[index][0];
            board[index][2] = 10;
            board[index][3] = 2;
            index++;
            tries = 0;
        }
        else if (input.at(i) == '-') {
            if (tries == 0) {
                board[index][0] = 0;
                board[index][3] = 0;
                tries++;
            }
            else {
                board[index][1] = 0;
                board[index][2] = board[index][0];
                board[index][3] = 0;
                tries = 0;
                index++;
            }
        }
        else {
            if (tries == 0) {
                board[index][0] = atoi(input.substr(i, 1).c_str());
                tries++;
            }
            else if (tries == 1) {
                board[index][1] = atoi(input.substr(i, 1).c_str());
                board[index][2] = board[index][0] + board[index][1];
                board[index][3] = 0;
                tries = 0;
                index++;
            }
        }
    }
    for (index = 0; index < 10; index++) {
        score += board[index][2];
 
        if (board[index][3] == 1) {
            if (board[index + 1][3] == 1) {
                score += board[index + 1][0] + board[index + 2][0];
            }
            else {
                score += board[index + 1][0] + board[index + 1][1];
            }
        }
        else if (board[index][3] == 2) {
            score += board[index + 1][0];
        }
    }
    cout << score << endl;
}