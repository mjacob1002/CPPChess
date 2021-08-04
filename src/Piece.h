#include<iostream>
#include<math.h>
#include<string>
struct Piece
{
    string rep; // the letter representation on the board
    char color; // black or white, 'b' or 'w'
    int value;

    Piece(string rep, char color);
    Piece() = default;
    ~Piece() = default; 

    virtual bool isValidMove(int startRank, int startFile, int endRank, int endFile);  
}

