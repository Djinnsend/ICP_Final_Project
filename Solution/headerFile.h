#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

class rectBlocks
{
public:
    int width;
    int height;
    int length;
    public:rectBlocks();
    public:void setWidth(int width);
    public:void setHeight(int height);
    public:void setLength(int length);
    public:int getWidth();
    public:int getHeight();
    public:int getLength();
    // public:rectBlocks(int width, int length, int height);
};
class sqrBaseRectBlocks : public rectBlocks
{
    public:sqrBaseRectBlocks();
};

class cuboidBlocks : public sqrBaseRectBlocks{
public:
    int diameter;
    public:cuboidBlocks();
    public:void setDiameter(int newDiameter);

    int calcBaseArea();
};
class cylindricalBlocks : public sqrBaseRectBlocks
{
    public:int baseDiameter;
    public:cylindricalBlocks();
    public:void cylindricalDiameterSort();
    public:void cylindricalDiameterPrint();
    public:void cylindiricalSurfaceAreaPrint();
    public:void cylindricalLengthPrint();
    public:void cylindricalAreaPrint();
    public:void setBaseDiameter(int newLength);
    public:int getBaseDiameter();
};

class sphericalBlocks : public cuboidBlocks
{
    public:int diameter;
    public:sphericalBlocks();
    public:void sortSphericalDiameter();
    public:void printSphericalDiameter();
    public:void printSphericalSurfaceArea();
    public:void printSphericalVolume();
    public:void setDiameter(int newDiameter);
    public:int getDiameter();
};

void readFile();
void sortSphereDiameter(vector<sphericalBlocks> sphereBlock);
void sortSphericalArea(vector<sphericalBlocks> sphereBlock);
void sortSphericalVolume(vector<sphericalBlocks> sphereBlock);
void sortCylinderDiameter(vector<cylindricalBlocks> cylinderBlock);
void sortCylinderBaseArea(vector<cylindricalBlocks> cylinderBlock);
void sortCylinderLength(vector<cylindricalBlocks> cylinderBlock);
void sortCylinderSurfaceArea(vector<cylindricalBlocks> cylinderBlock);
double calcCylinderSurfaceArea(int diameter, int length);
double calcSphereSurfaceArea(int diameter);
double calcCylinderVolume(int diameter, int length);
double calcSphereVolume(int diameter);
double calcCylinderBaseArea(int diameter);
void printSphereDiameter(vector<sphericalBlocks> sphereBlock);
void printSphereSurfaceArea(vector<sphericalBlocks> sphereBlock);
void printSphereVolume(vector<sphericalBlocks> sphereBlock);
void printCylinderSurfaceArea(vector<cylindricalBlocks> cylinderBlock);
void printCylinderBaseDiameter(vector<cylindricalBlocks> cylinderBlock);
void printCylinderLength(vector<cylindricalBlocks> cylinderBlock);
void printCylinderBaseArea(vector<cylindricalBlocks> cylinderBlock);
