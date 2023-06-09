#include "Mountains.h"

// Sets Mountain name
void Mountains::SetName(string name) {
    this->name = name;
}

// Sets Mountain's location
void Mountains::SetCountry(string country) {
    this->country = country;
}

// Set Mountain's elevation in feet
void Mountains::SetFtElevation(int ftElevation) {
    this->ftElevation = ftElevation;
}

// Get Mountain's name
string Mountains::GetName() {
    return name;
}

// Get Mountain's Location 
string Mountains::GetCountry() {
    return country;
}

// Get Mountains Elevation in Feet
int Mountains::GetFtElevation() {
    return ftElevation;
}

// Converts Mountain's elevation from feet to meters
double Mountains::ToMeters(int ftElevation) {
    const double conversion = 3.2808;
    double meters = ftElevation / conversion;
    
    return meters;
}