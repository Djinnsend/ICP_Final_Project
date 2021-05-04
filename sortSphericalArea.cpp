#include "headerFile.h"

void sortSphericalArea(vector<sphericalBlocks> sphereBlock)
{
    if (sphereBlock.size() == 0)
    {
        cout << "There are no sphericalBlocks to iterate through or print\n";
    }
    else
    {
        if (sphereBlock.size() == 1)
        {
            cout << "Array is of size 1. No sorting needed\n";
        }
        else
        {
            for (int i = sphereBlock.size() - 1; i >= 0; i--)
            {
                sphericalBlocks tempHolder;
                int tempCalc = (int)calcSphereSurfaceArea(sphereBlock[i].getDiameter());
                int position = i;
                for (int j = i; j >= 0; j--)
                {
                    int checkCalc = (int)calcSphereSurfaceArea(sphereBlock[j].getDiameter());
                    if (checkCalc > tempCalc)
                    {
                        // Here we note the position of whatever is greater than i
                        position = j;
                        tempCalc = (int)calcSphereSurfaceArea(sphereBlock[j].getDiameter());
                    }
                }
                if (calcSphereSurfaceArea(sphereBlock[i].getDiameter()) < calcSphereSurfaceArea(sphereBlock[position].getDiameter()))
                {
                    tempHolder = sphereBlock[i];
                    sphereBlock[i] = sphereBlock[position];
                    sphereBlock[position] = tempHolder;
                }
            }
        }
    }
};

