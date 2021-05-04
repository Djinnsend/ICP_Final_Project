#include "headerFile.h"

cylindricalBlocks::cylindricalBlocks() : sqrBaseRectBlocks() {}

void cylindricalBlocks::setBaseDiameter(int newLength)
{
    baseDiameter = newLength;
}

int cylindricalBlocks::getBaseDiameter()
{
    return baseDiameter;
}
