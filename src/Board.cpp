#include "Board.h"

Board::Board()
{
    bool isWhite = false;
    char color = '-'; // declare color variable for square obj
    board = new Square**[8]; // create 2D arary of Squares
    for(int i = 0; i< 8; i++)
    {
        board[i] = new Square*[8];
    }

    for(int i = 0; i < 8 i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(isWhite){color = 'w'}; // if bool is true, color is white
            else{color = 'b'}; // else is black
            board[i][j] = new Square(color, i+1, j+1);
            isWhite = !isWhite;
        }
        isWhite = !isWhite; // after filling in a rank, switch the isWhite bool to fix discrepancies
    }

}