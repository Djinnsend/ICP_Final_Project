#include "headerFile.h"

void sortCylinderLength(vector<cylindricalBlocks> cylinderBlock)
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
                int tempCalc = cylinderBlock[i].getLength();
                int position = i;
                for (int j = i; j >= 0; j--)
                {
                    int checkCalc = cylinderBlock[j].getLength();

                    if (checkCalc > tempCalc)
                    {
                        // Here we note the position of whatever is greater than i
                        position = j;
                        tempCalc =  cylinderBlock[j].getLength();
                    }
                }
                if (cylinderBlock[i].getLength() < cylinderBlock[position].getLength())
                {
                    tempHolder = cylinderBlock[i];
                    cylinderBlock[i] = cylinderBlock[position];
                    cylinderBlock[position] = tempHolder;
                }
            }
        }
    }
};

