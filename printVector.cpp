#include "headerFile.h"

void printSphereDiameter(vector<sphericalBlocks> sphereBlock){
    int index = 0;
    for(auto x:sphereBlock){
        cout << "The diameter of the spherical block at index " 
        << index << " is " << x.getDiameter() << "\n";
        index++;
    }
}

void printSphereSurfaceArea(vector<sphericalBlocks> sphereBlock){
    int index = 0;
    for(auto x:sphereBlock){
        cout << "The surface area of the spherical block at index " 
        << index << " is " << calcSphereSurfaceArea(x.getDiameter()) << "\n";
        index++;
    }
}

void printSphereVolume(vector<sphericalBlocks> sphereBlock){
    int index = 0;
    for(auto x:sphereBlock){
        cout << "The volume of the spherical block at index " 
        << index << " is " << calcSphereVolume(x.getDiameter()) << "\n";
        index++;
    }
}

void printCylinderSurfaceArea(vector<cylindricalBlocks> cylinderBlock){
    int index = 0;
    for(auto x:cylinderBlock){
        cout << "The surface area of the cylinder block at index " << index << " is "
        << calcCylinderVolume(x.getBaseDiameter(), x.getLength()) << "\n";
        index++;
    }
}

void printCylinderBaseArea(vector<cylindricalBlocks> cylinderBlock){
    int index = 0;
    for(auto x:cylinderBlock){
        cout << "The base area of the cylinder block at index " << index << " is "
        << calcCylinderBaseArea(x.getBaseDiameter()) << "\n";
        index++;
    }
}

void printCylinderBaseDiameter(vector<cylindricalBlocks> cylinderBlock){
    int index = 0;
    for(auto x:cylinderBlock){
        cout << "The base diameter of the cylinder block at index " << index << " is "
        << x.getBaseDiameter() << "\n";
        index++;
    }
}

void printCylinderLength(vector<cylindricalBlocks> cylinderBlock){
    int index = 0;
    for(auto x:cylinderBlock){
        cout << "The length of the cylinder block at index " << index << " is "
        << x.getBaseDiameter() << "\n";
        index++;
    }
}