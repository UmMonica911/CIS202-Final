#include "Mountains.h"

void Mountains::SetName(string name) {
    this->name = name;
}

void Mountains::SetCountry(string country) {
    this->country = country;
}

void Mountains::SetFtElevation(int ftElevation) {
    this->ftElevation = ftElevation;
}

string Mountains::GetName() {
    return name;
}

string Mountains::GetCountry() {
    return country;
}

int Mountains::GetFtElevation() {
    return ftElevation;
}

double Mountains::ToMeters(int ftElevation) {
    const double conversion = 3.2808;
    double meters = ftElevation / conversion;
    
    return meters;
}