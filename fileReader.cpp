#include "headerFile.h"

void readFile()
{
    int width, length, height;
    // ifstream file("dataBlocks.dat");
    ifstream file;
    file.open("dataBlocks.dat");
    string line;
    //Declaring array
    vector<rectBlocks> rectBlock;
    vector<sqrBaseRectBlocks> sqrBase;
    vector<sphericalBlocks> sphereBlock;
    vector<cylindricalBlocks> cylinderBlock;
    vector<cuboidBlocks> cubeBlock;

    // Loop here to run till end of file
    if (file.is_open())
    {
        rectBlocks tempVal;
        cuboidBlocks tempCube;
        sqrBaseRectBlocks tempSquare;
        cylindricalBlocks tempCylinder;
        sphericalBlocks tempSphere;
        file >> width >> length >> height;
        while (!file.eof())
        {
            file >> width >> length >> height;
            tempVal.setHeight(height);
            tempVal.setWidth(width);
            tempVal.setLength(length);
            rectBlock.push_back(tempVal);
            if (width == height)
            {
                tempSquare.setHeight(height);
                tempSquare.setLength(length);
                tempSquare.setWidth(width);
                sqrBase.push_back(tempSquare);
                if (width == length && length == height)
                {
                    tempCube.setHeight(height);
                    tempCube.setLength(length);
                    tempCube.setWidth(width);
                    cubeBlock.push_back(tempCube);
                    tempSphere.setLength(length);
                    tempSphere.setDiameter(width);
                    sphereBlock.push_back(tempSphere);
                }
                else
                {
                    tempCylinder.setLength(length);
                    tempCylinder.setBaseDiameter(width);
                    cylinderBlock.push_back(tempCylinder);
                }
            }
        }
        file.close();
        cout << "SUCCESS in reading the file and assigning blocks to their corresponding arrays (vectors)\n";
        sortCylinderBaseArea(cylinderBlock);
        printCylinderBaseArea(cylinderBlock);
        sortCylinderDiameter(cylinderBlock);
        printCylinderBaseDiameter(cylinderBlock);
        sortCylinderLength(cylinderBlock);
        printCylinderLength(cylinderBlock);
        sortCylinderSurfaceArea(cylinderBlock);
        printCylinderSurfaceArea(cylinderBlock);
        sortSphereDiameter(sphereBlock);
        printSphereDiameter(sphereBlock);
        sortSphericalArea(sphereBlock);
        printSphereSurfaceArea(sphereBlock);
        sortSphericalVolume(sphereBlock);
        printSphereVolume(sphereBlock);
    }
    else
    {
        cout << "File Reader was unavailable. Please check the code\n";
    }
}
