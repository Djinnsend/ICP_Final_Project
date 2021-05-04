#include "headerFile.h"

void sortSphericalVolume(vector<sphericalBlocks> sphereBlock)
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
                double tempCalc = calcSphereVolume(sphereBlock[i].getDiameter());
                int position = i;
                for (int j = i; j >= 0; j--)
                {
                    double checkCalc = calcSphereVolume(sphereBlock[j].getDiameter());
                    if (checkCalc > tempCalc)
                    {
                        // Here we note the position of whatever is greater than i
                        position = j;
                        tempCalc = sphereBlock[j].getDiameter();
                    }
                }
                if (calcSphereVolume(sphereBlock[i].getDiameter()) < calcSphereVolume(sphereBlock[position].getDiameter()))
                {
                    tempHolder = sphereBlock[i];
                    sphereBlock[i] = sphereBlock[position];
                    sphereBlock[position] = tempHolder;
                }
            }
        }
    }
};