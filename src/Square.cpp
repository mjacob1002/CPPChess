#include "Square.h"

Square::Square(char color, int rank, int file)
{
    this -> color = color;
    this -> rank = rank;
    this -> file = file;
}

Piece* placePiece(Piece* movedPiece)
{
    Piece* temp = occupy;
    occupy = movedPiece; // set the occupying piece to the new move
    current = movedPiece -> rep;

} 
