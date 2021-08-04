#include "Piece.h"

Piece::Piece(string rep, char color)
{
    this -> rep = rep;
    this -> color = color;
}

// method that all of the pieces inherit from.
virtual bool Piece::isValidMove(int startRank, int startFile, int endRank, int endFile)
{
    return false;
}

Piece::Piece(string rep, char color)
{
    this -> rep = rep;
    this -> color = color;
    value = 0; // will be overriden for different pieces
}
