compile: calcFile.o cuboidBlocks.o cylindiricalBlocks.o fileReader.o main.o printVector.o rectBlocks.o sortCylinderBaseArea.o sortCylinderDiameter.o sortCylinderLength.o sortCylinderSurfaceArea.o sortSphereDiameter.o sortSphericalArea.o sortSphericalVolume.o sphericalBlocks.o sqrBaseRectBlocks.o
	g++ calcFile.o cuboidBlocks.o cylindiricalBlocks.o fileReader.o main.o printVector.o rectBlocks.o sortCylinderBaseArea.o sortCylinderDiameter.o sortCylinderLength.o sortCylinderSurfaceArea.o sortSphereDiameter.o sortSphericalArea.o sortSphericalVolume.o sphericalBlocks.o sqrBaseRectBlocks.o -o compile

calcFile.o: calcFile.cpp
	g++ -c calcFile.cpp

cuboidBlocks.o: cuboidBlocks.cpp
	g++ -c cuboidBlocks.cpp

cylindiricalBlocks.o: cylindiricalBlocks.cpp
	g++ -c cylindiricalBlocks.cpp

fileReader.o: fileReader.cpp
	g++ -c fileReader.cpp

main.o: main.cpp
	g++ -c main.cpp

printVector.o: printVector.cpp
	g++ -c printVector.cpp

rectBlocks.o: rectBlocks.cpp
	g++ -c rectBlocks.cpp

sortCylinderBaseArea.o: sortCylinderBaseArea.cpp
	g++ -c sortCylinderBaseArea.cpp

sortCylinderDiameter.o: sortCylinderDiameter.cpp
	g++ -c sortCylinderDiameter.cpp

sortCylinderLength.o: sortCylinderLength.cpp
	g++ -c sortCylinderLength.cpp

sortCylinderSurfaceArea.o: sortCylinderSurfaceArea.cpp
	g++ -c sortCylinderSurfaceArea.cpp

sortSphereDiameter.o: sortSphereDiameter.cpp
	g++ -c sortSphereDiameter.cpp

sortSphericalArea.o: sortSphericalArea.cpp
	g++ -c sortSphericalArea.cpp

sortSphericalVolume.o: sortSphericalVolume.cpp
	g++ -c sortSphericalVolume.cpp

sqrBaseRectBlocks.o: sqrBaseRectBlocks.cpp
	g++ -c sqrBaseRectBlocks.cpp

clean:
	rm *.o compile