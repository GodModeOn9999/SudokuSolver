#include <bits/stdc++.h>

using namespace std;

int main()
{
    int grid[9][9];
    cout << "\n      ---Welcome to SudokuSolver---" << endl;
    cout << "\nEnter the puzzle below (Enter '0' for blank)\n" << endl;
    for (int i=0 ; i<9 ; i++)
        for (int j=0 ; j<9 ; j++)
            cin >> grid[i][j];
    system("clear");
    cout << "           ---You have entered---" << endl;
    for (int i=0 ; i<9 ; i++)
    {
        for (int j=0 ; j<9 ; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
}