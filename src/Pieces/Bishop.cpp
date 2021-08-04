#include "Bishop.h"

Bishop::Bishop(string rep, char color)
{
    value = 3; // bishop is worth 3 points. Superconstructor has already been called
}

bool Bishop::isValidMove(int startRank, int startFile, int endRank, int endFile)
{
    // check to make sure they didn't leave the board
    if(endRank > 8 || endFile || 8 || endRank < 1 || endFile < 1)
    {
        std::cout << "You are out of the board. Please try another move" << std::endl;
        return false;
    }

    int diff = endRank - startRank; // get the difference between proposed moves
    return (endFile == startFile + diff); // if they don't equal, the move wasn't diagonal, so it isn't valid for the bishop.
}