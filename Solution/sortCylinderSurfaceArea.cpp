#include "headerFile.h"

void sortCylinderSurfaceArea(vector<cylindricalBlocks> cylinderBlock)
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
                int tempCalc = calcCylinderSurfaceArea(cylinderBlock[i].getBaseDiameter(),cylinderBlock[i].getLength());
                int position = i;


                for (int j = i; j >= 0; j--)
                {
                    int checkCalc = calcCylinderSurfaceArea(cylinderBlock[j].getBaseDiameter(),cylinderBlock[j].getLength());

                    if (checkCalc > tempCalc)
                    {
                        position = j;
                        tempCalc = (int) calcCylinderSurfaceArea(cylinderBlock[j].getBaseDiameter(),cylinderBlock[j].getLength());
                    }
                }
                if (calcCylinderSurfaceArea(cylinderBlock[i].getBaseDiameter(),cylinderBlock[i].getLength()) < calcCylinderSurfaceArea(cylinderBlock[position].getBaseDiameter(),cylinderBlock[position].getLength()))
                {
                    tempHolder = cylinderBlock[i];
                    cylinderBlock[i] = cylinderBlock[position];
                    cylinderBlock[position] = tempHolder;
                }
            }
        }
    }
};

