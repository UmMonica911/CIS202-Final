/*
File Name: Mountain Details
Date: 5 June 2023    
Email: monicau6992@student.vvc.edu    
Author: Monica Um    
Description: 
Write a program that will include the following:
1. A class that will store mountain details which will included the following:
  - Member for the name, (make it private for java or c++)
  - Member for the country, (make it private for java or c++)
  - Member for the elevation, (make it private for java or c++)
  - Setters and getters for all the data members. (Make them public for java or c++)
  - A member function call toMeters that will take the elevation and convert the value from feet to meters and return the converted value. The relationship for feet to meters is 1 meter per 3.2808 feet
2. In the main function of the Main class(for java, main function for c++ and a main function for python with the __name__=="__main__" structure) , create 7 instances of Mountain objects and put the mountain data from the table above.
3. Put the mountain objects in an appropriate data structure.
4. Write a method called minElevation in the (Main class for java, main module for python, or the file that has main for c++) that will return the minimum elevation.
5. Iterate over the data structure that contains the Mountain objects and print out the Mountain details similar to the table above, with the addition of the elevation in feet and in meters.
6. Programmatically print out the elevation and name of the shortest mountain (do not hard code this)
*/

#include "Mountains.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// max number of mountains is seven
const int maxNumber = 7;

// return minimum elevation and name of that mountain
int minElevation (vector <Mountains> mountains) {

    // stores location of needed information
    int index = 0;
    
    int minElevation = mountains.at(0).GetFtElevation();
    string minMountainName = mountains.at(0).GetName();
    
    // traversing Mountains vector
    for (int i = 0; i < maxNumber; i++) {
        // if current mountains elevation is shorter than current minimum value, update minElevation and minMountainName
        if (mountains.at(i).GetFtElevation() < minElevation) {
            minElevation = mountains.at(i).GetFtElevation();
            minMountainName = mountains.at(i).GetName();
            index = i;
        }
    }

    // use this index to access the minimum elevation and the name
    return index;
}


int main() {

    // vector to store mountains info
    vector<Mountains> mountains;

    // create seven instances of mountain objects and enter data from above
        // name, country, elevation
    // store mountain objects in appropriate data structure
    Mountains mountain1;
    mountain1.SetName("Chimborazo");
    mountain1.SetCountry("Ecuador");
    mountain1.SetFtElevation(20549);
    mountains.push_back(mountain1);
    Mountains mountain2;
    mountain2.SetName("Matterhorn");
    mountain2.SetCountry("Switzerland");
    mountain2.SetFtElevation(14692);
    mountains.push_back(mountain2);
    Mountains mountain3;
    mountain3.SetName("Olympus");
    mountain3.SetCountry("Greece (Macedonia)");
    mountain3.SetFtElevation(9573);
    mountains.push_back(mountain3);
    Mountains mountain4;
    mountain4.SetName("Everest");
    mountain4.SetCountry("Nepal");
    mountain4.SetFtElevation(29029);
    mountains.push_back(mountain4);
    Mountains mountain5;
    mountain5.SetName("Mount Marcy - Adirondacks");
    mountain5.SetCountry("United States");
    mountain5.SetFtElevation(5344);
    mountains.push_back(mountain5);
    Mountains mountain6;
    mountain6.SetName("Mount Mitchell - Blue Ridge");
    mountain6.SetCountry("United States");
    mountain6.SetFtElevation(6684);
    mountains.push_back(mountain6);
    Mountains mountain7;
    mountain7.SetName("Zugspitze");
    mountain7.SetCountry("Switzerland");
    mountain7.SetFtElevation(9719);
    mountains.push_back(mountain7);

    // Prints out table of mountain info
    cout << left << setw(28) << "Mountain" << setw(19) <<  "Country" 
         << right << setw(18) <<  "Elevation ft / m"  << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" 
         << endl;
    
    // iterate over data structure and print out Mountain details from table
        // include elevation in feet and meters
    for (int i = 0; i < maxNumber; i++) {
        cout << left << setw(28) << mountains.at(i).GetName()    
             << setw(19) << mountains.at(i).GetCountry()   
             << setw(6) << mountains.at(i).GetFtElevation() << "ft";    
        
        // PRINT ELEVATION IN METERS 
        cout << right  << setw(10) 
             << mountains.at(i).ToMeters(mountains.at(i).GetFtElevation()) 
             << " m" << endl;
    }

    // gathers info about the shortest mountain
    int minFtElevation = mountains.at(minElevation(mountains)).GetFtElevation();
    string shortest = mountains.at(minElevation(mountains)).GetName(); 
    
    // Prints out the shortest mountain
    cout << endl;
    cout << "Minimum Elevation: " << minFtElevation << "ft" << endl;

    // Print out Elevation and name of shortest mountain
    cout << "Shortest Mountain: " << shortest << " at " << minFtElevation 
         << "ft tall" << endl;
}