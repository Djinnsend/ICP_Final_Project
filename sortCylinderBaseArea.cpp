#include "headerFile.h"

void sortCylinderBaseArea(vector<cylindricalBlocks> cylinderBlock)
{
    if (cylinderBlock.size() == 0)
    {
        cout << "There are no cylindricalBlocks to iterate through or print\n";
    }
    else
    {
        if (cylinderBlock.size() == 1)
        {
            cout << "Array is of size 1. No sorting needed\n";
        }
        else
        {
            for (int i = cylinderBlock.size() - 1; i >= 0; i--)
            {
                cylindricalBlocks tempHolder;
                int tempCalc = calcCylinderBaseArea(cylinderBlock[i].getBaseDiameter());
                int position = i;

                for (int j = i; j >= 0; j--)
                {
                    int checkCalc = (int)calcCylinderBaseArea(cylinderBlock[j].getBaseDiameter());

                    if (checkCalc > tempCalc)
                    {
                        // Here we note the position of whatever is greater than i
                        position = j;
                        tempCalc = (int) calcCylinderBaseArea(cylinderBlock[j].getBaseDiameter());
                    }
                }
                if (calcCylinderBaseArea(cylinderBlock[i].getBaseDiameter()) < calcCylinderBaseArea(cylinderBlock[position].getBaseDiameter()))
                {
                    tempHolder = cylinderBlock[i];
                    cylinderBlock[i] = cylinderBlock[position];
                    cylinderBlock[position] = tempHolder;
                }
            }
        }
    }
};