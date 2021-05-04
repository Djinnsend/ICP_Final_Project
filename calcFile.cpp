#include "headerFile.h"
double pi = 2*acos(0.0);

double calcCylinderSurfaceArea(int diameter, int length){
    int radius = diameter/2;
    double partOne =  2*pi*radius*length;
    double partTwo = 2*pi;
    double partThree = radius^2;
    return partOne + partTwo * partThree;
}

double calcSphereSurfaceArea(int diameter){
    int radius = diameter/2;
    double partOne = 4*pi;
    double partTwo = radius^2;
    return partOne * partTwo;
}

double calcCylinderVolume(int diameter, int length){
    int radius = diameter/2;
    double partOne = pi * length;
    double partTwo = radius^2;
    return partOne * partTwo;
}

double calcSphereVolume(int diameter){
    int radius = diameter/2;
    double partOne = (4/3) * pi;
    double partTwo = radius^3;
    return partOne*partTwo;
}

double calcCylinderBaseArea(int diameter){
    int radius = diameter/2;
    double partOne = radius^2;
    double partTwo = pi * partOne;
    return partTwo;
}