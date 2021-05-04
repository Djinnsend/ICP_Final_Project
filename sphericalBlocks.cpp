#include "headerFile.h"

sphericalBlocks::sphericalBlocks() : cuboidBlocks() {}

void sphericalBlocks::setDiameter(int newDiameter)
{
    diameter = newDiameter;
}

int sphericalBlocks::getDiameter()
{
    return diameter;
}
