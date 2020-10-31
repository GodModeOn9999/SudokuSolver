# SudokuSolver

## Introduction

This program is capable of solving all kinds of 9x9 sudoku puzzles.
Input is given through terminal in the form of a 9x9 grid. Code is in C++.

### How to use (VSCode)

Clone the repo into a directory of your choice, then cd into that directory.

```
$ cd projects/SudokuSolver
```
Launch VSCode in this directory.

```
$ code .
```
_If your'e a newbie, you don't need to copy the $ sign, It just symbolizes
that the following command has to be entered into a terminal_

Now, in VSCode, if you want to run it 'as is', just run the build task (g++) (Ctrl+Shift+B),
Create a terminal within VSCode (CTRL+SHIFT+`), and type:

```
$ ./main
```
If you want to do something more interesting, add a line in the print function, before 
```system("clear");``` (change to ```system("cls")``` in case you are using a windows machine.)

```
usleep(10);
```
What this does is, it makes every change in the backtracking algorithm wait for 10 microseconds (obviously, you can play around with this, but I found out that a sleep/wait of more than 10 microseconds makes it slow)

Then, follow the same steps as before, 

```
$ ./main
```
Enter the sudoku puzzle in a 9x9 format, with 0s in case of blank. For example,

```
Enter the puzzle below (Enter '0' for blank)

5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
```
```
---You have entered---

5 3 0 | 0 7 0 | 0 0 0 
6 0 0 | 1 9 5 | 0 0 0 
0 9 8 | 0 0 0 | 0 6 0 
- - - - - - - - - - -
8 0 0 | 0 6 0 | 0 0 3 
4 0 0 | 8 0 3 | 0 0 1 
7 0 0 | 0 2 0 | 0 0 6 
- - - - - - - - - - -
0 6 0 | 0 0 0 | 2 8 0 
0 0 0 | 4 1 9 | 0 0 5 
0 0 0 | 0 8 0 | 0 7 9 

Do you want to continue? (y/n) (enter 'x' to exit).
>> y
```
Here, enter y to continue, enter n to input again, and enter x to exit the program.

```
           ---Solution---

5 3 4 | 6 7 8 | 9 1 2 
6 7 2 | 1 9 5 | 3 4 8 
1 9 8 | 3 4 2 | 5 6 7 
- - - - - - - - - - -
8 5 9 | 7 6 1 | 4 2 3 
4 2 6 | 8 5 3 | 7 9 1 
7 1 3 | 9 2 4 | 8 5 6 
- - - - - - - - - - -
9 6 1 | 5 3 7 | 2 8 4 
2 8 7 | 4 1 9 | 6 3 5 
3 4 5 | 2 8 6 | 1 7 9
```
That's it!

Do write to me incase you want to give any suggestions/improvements, any tips are most welcome.

Also, I'm planning to make a program which can solve multiple puzzles such as Sudoku, Kakuro, etc. If you want to contribute, do hit me up.
