#include "headerFile.h"

void sortCylinderDiameter(vector<cylindricalBlocks> cylinderBlock)
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
                int comp = cylinderBlock[i].getBaseDiameter();
                int position = i;
                for (int j = i; j >= 0; j--)
                {
                    if (cylinderBlock[j].getBaseDiameter() > comp)
                    {
                        // Here we note the position of whatever is greater than i
                        position = j;
                        comp = cylinderBlock[j].getBaseDiameter();
                    }
                }
                if (cylinderBlock[i].getBaseDiameter() < cylinderBlock[position].getBaseDiameter())
                {
                    tempHolder = cylinderBlock[i];
                    cylinderBlock[i] = cylinderBlock[position];
                    cylinderBlock[position] = tempHolder;
                }
            }
        }
    }
};

