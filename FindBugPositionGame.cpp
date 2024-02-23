#include <iostream>
using namespace std;

// In this game, user have to enter two inputs
// row number and column number 
// if bug is present at entered position then that move 
// is counted as correct hit otherwise miss hit
// total 8 moves and 4 bugs are present
// Bug means simply any one item or entity and user have to find their
// correct position ..!

int main()
{
    int bugs[3][5] = {
        0, 0, 0, 1, 0,
        0, 1, 1, 0, 0,
        1, 0, 0, 0, 0};
    // Correct moves : {0,3} , {1,1} , {1,2} , {2,0}
    int hit[4] = {0, 0, 0, 0};
    int moves = 1;
    int row, column, hitCount = 0;

    cout << "*********" << endl;
    cout << "You have 8 moves and\n";
    cout << "you have to hit all 4 bugs!";
    cout << "\nYour Moves are counted.";
    cout << "\nTip : " << endl;
    cout << "\nYour Choice should be in the form of : row < 3 and column < 5." << endl;
    cout << "\nLet,s Begin !" << endl;
    cout << "\nSample Input:---" << endl;
    cout << "\nRow no : 2" << endl;
    cout << "\nColumn no : 4" << endl;

    for (int i = 0; i < 8 && hit[3] == 0; i++)
    {
        cout << "*****************" << endl;
        cout << "\n\nEnter Your " << moves << " choice: " << endl;
        cout << "Row no. : ";
        cin >> row;
        cout << "Column no. : ";
        cin >> column;

        if (bugs[row][column] == 1)
        {
            cout << "Yay , You hited correctly!" << endl;
            bugs[row][column] = 0;
            hit[hitCount] = 1;
            hitCount++;
        }
        else
        {
            cout << "Oops, Missed!" << endl;
        }

        moves++;
    }

    if (hitCount == 4)
    {
        cout << "*********************" << endl;
        cout << "\nVictory! You done this." << endl;
        cout << "Used " << moves - 1 << " moves." << endl;
        cout << "Correct moves : {0,3}, {1,1}, {1,2}, {2,0}" << endl;
        cout << "Awesome!" << endl;
    }
    else
    {
        cout << "**********************" << endl;
        cout << "\nMoves are over!" << endl;
        cout << "You Losed this game!" << endl;
        cout << "Correct moves : {0,3}, {1,1}, {1,2}, {2,0}" << endl;
    }

    return 0;
}