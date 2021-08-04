#include<iostream>
#include<string>
#include "Piece.h"
struct Square
{
    char color; // 'w' for white, 'b' for black
    string current = "-"; // representation of the current piece on square. '-' means not occupied.
    int rank; // goes from 1 to 8 and is the horizontal band
    int file; // goes from 'a' to 'h', but will be labeled as 1-8. Will use map to convert alphabet to numbers
    Piece* occupy; // pointer to the piece currently residing on that square

    Square(char color, int rank, int file);

    Piece* placePiece(Piece* movedPiece); // deals with captures and whatnot





}
