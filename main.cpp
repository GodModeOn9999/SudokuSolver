#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

#define EMPTY 0

bool rowCheck(int grid[9][9], int x, int num)
{
    for (int i=0 ; i<9 ; i++)
        if(grid[x][i] == num)
            return true;
    return false;
}

bool colCheck(int grid[9][9], int y, int num)
{
    for(int i=0 ; i<9 ; i++)
        if(grid[i][y] == num)
            return true;
    return false;
}

bool boxCheck(int grid[9][9], int x, int y, int num)
{
    for(int i=0 ; i<3 ; i++)
        for(int j=0 ; j<3 ; j++)
            if(grid[i+x][j+y] == num)
                return true;
    return false;
}

bool safeCheck(int grid[9][9], int x, int y, int num)
{
    return (!rowCheck(grid, x, num) &&
            !colCheck(grid, y, num) &&
            !boxCheck(grid, x-x%3, y-y%3, num) &&
            grid[x][y] == EMPTY);
    
}

bool emptyCells(int grid[9][9], int &x, int &y)
{
    for (x=0 ; x<9 ; x++)
        for (y=0 ; y<9 ; y++)
            if(grid[x][y] == EMPTY)
                return true;
    return false;
}

void printIt(int grid[9][9])
{
    system("clear");
    cout << "           ---Solution---\n" << endl;
    
    for (int i=0 ; i<9 ; i++)
    {
        for (int j=0 ; j<9 ; j++)
        {
            cout << grid[i][j] << " ";
            if (j == 2 || j == 5)
                cout << "| ";
        }
        if (i == 2 || i == 5)
            cout << "\n- - - - - - - - - - -";
        cout << endl;
    }
}

bool runningFunc(int grid[9][9])
{
    int row, col;

    if(!emptyCells(grid, row, col))
        return true;
    
    for(int digit=1 ; digit<10 ; digit++)
    {
        if(safeCheck(grid, row, col, digit))
        {
            grid[row][col] = digit;
            if(runningFunc(grid))
                return true;
            
            grid[row][col] = EMPTY;
            
        }
        
    }
    
    return false;
}

int main()
{
    int grid[9][9];
    cout << "\n      ---Welcome to SudokuSolver---" << endl;
    while (true)
    {
        system("clear");
        cout << "\nEnter the puzzle below (Enter '0' for blank)\n" << endl;
        for (int i=0 ; i<9 ; i++)
            for (int j=0 ; j<9 ; j++)
                cin >> grid[i][j];
        system("clear");

        cout << "           ---You have entered---\n" << endl;
        for (int i=0 ; i<9 ; i++)
        {
            for (int j=0 ; j<9 ; j++)
            {
                cout << grid[i][j] << " ";
                if (j == 2 || j == 5)
                    cout << "| ";
            }
            if (i == 2 || i == 5)
                cout << "\n- - - - - - - - - - -";
            cout << endl;
        }
           cout << "\nDo you want to continue? (y/n) (enter 'x' to exit).\n>> ";
        char ch;
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
            break;
        else if (ch == 'n' || ch == 'N')
            continue;
        else if (ch == 'x' || ch == 'X')
            exit(0);
    }
    cout << endl;
    if (runningFunc(grid))
        printIt(grid);
    else
        cout << "\nSolution doesn't exist! \n";
    
}