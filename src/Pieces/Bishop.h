#include "../Piece.h"
#include <iostream>

struct Bishop : public Piece
{

    Bishop() = default;

    Bishop(string rep, char color): Piece(rep, color);

    bool isValidMove override(int startRank, int startFile, int endRank, int endFile);

};