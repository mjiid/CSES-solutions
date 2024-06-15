#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int row, int col, const vector<vector<char>> &board) {
    for (int i = 0; i < row; ++i) {
        if (board[i][col] == 'Q') return false;
    }

    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 'Q') return false;
    }

    for (int i = row, j = col; i >= 0 && j < 8; --i, ++j) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}

void solve(vector<vector<char>> &board, int row, int &total) {
    if (row == 8) {
        total++;
        return;
    }

    for (int col = 0; col < 8; ++col) {
        if (board[row][col] == '.' && isSafe(row, col, board)) {
            board[row][col] = 'Q';
            solve(board, row + 1, total);
            board[row][col] = '.';
        }
    }
}

int main() {
    vector<vector<char>> board(8, vector<char>(8));
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> board[i][j];
        }
    } 

    int total = 0;
    solve(board, 0, total);
    cout << total << endl;

    return 0;
}
