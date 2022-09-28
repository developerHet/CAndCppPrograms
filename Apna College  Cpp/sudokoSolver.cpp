#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<char>> &board, int row, int col, char c)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[row][i] == c)
        {
            return false;
        }
        if (board[i][col] == c)
        {
            return false;
        }

        if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == c)
        {
            return false;
        }
    }
    return true;
}

bool sudokoSolver(vector<vector<char>> &board)
{
    for (int row = 0; row < board.size(); row++)
    {
        for (int col = 0; col < board[0].size(); col++)
        {
            if (board[row][col] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isValid(board, row, col, c))
                    {
                        board[row][col] = c;

                        if (sudokoSolver(board))
                        {
                            return true;
                        }
                        else
                        {
                            board[row][col] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void finalSolvedSudoko(vector<vector<char>> &board)
{
    sudokoSolver(board);
}

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    finalSolvedSudoko(board);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}