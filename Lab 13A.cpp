#include <iostream>

using namespace std;

class BuildingBlueprint {
private:
    int numStories;
    int numApartments;
    float occupancyRate;
    bool fullyOccupied;

public:
    BuildingBlueprint() {
        numStories = 10;
        numApartments = 20;
        occupancyRate = 1.0;
        fullyOccupied = true;
    }

    BuildingBlueprint(int stories, int apartments, float occupancy) {
        numStories = stories;
        numApartments = apartments;
        occupancyRate = occupancy;
        fullyOccupied = (occupancy == 1.0);
    }

    int getNumStories() {
        return numStories;
    }

    int getNumApartments() {
        return numApartments;
    }

    float getOccupancyRate() {
        return occupancyRate;
    }

    bool isFullyOccupied() {
        return fullyOccupied;
    }

    void setOccupancyRate(float occupancy) {
        occupancyRate = occupancy;
        fullyOccupied = (occupancy == 1.0);
    }
};

int main() {
    // create two building objects
    BuildingBlueprint buildingOne;
    BuildingBlueprint buildingTwo(30, 30, 0.75f);

    // print out the information of buildingOne using getters
    cout << "Year 2020:" << endl;
    cout << "Building 1 has " << buildingOne.getNumStories() << " floors, " << buildingOne.getNumApartments() << " apartments, and is " << (buildingOne.getOccupancyRate() * 100) << "% occupied. Full? " << boolalpha << buildingOne.isFullyOccupied() << endl;

    // print out the information of buildingTwo using getters
    cout << "Building 2 has " << buildingTwo.getNumStories() << " floors, " << buildingTwo.getNumApartments() << " apartments, and is " << (buildingTwo.getOccupancyRate() * 100) << "% occupied. Full? " << boolalpha << buildingTwo.isFullyOccupied() << endl;

    // use setters to change occupancy rate
    buildingOne.setOccupancyRate(0.0f);
    buildingTwo.setOccupancyRate(1.0f);

    // print out the information of buildingOne and buildingTwo again
    cout << "Year 2043:" << endl;
    cout << "Building 1 has " << buildingOne.getNumStories() << " floors, " << buildingOne.getNumApartments() << " apartments, and is " << (buildingOne.getOccupancyRate() * 100) << "% occupied. Full? " << boolalpha << buildingOne.isFullyOccupied() << endl;
    cout << "Building 2 has " << buildingTwo.getNumStories() << " floors, " << buildingTwo.getNumApartments() << " apartments, and is " << (buildingTwo.getOccupancyRate() * 100) << "% occupied. Full? " << boolalpha << buildingTwo.isFullyOccupied() << endl;
    cout << "Looks like people prefer taller buildings." << endl;

    return 0;
}

