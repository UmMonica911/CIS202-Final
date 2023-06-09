#ifndef MOUNTAINSH
#define MOUNTAINSH

#include <iostream>
#include <string>
using namespace std;

class Mountains {

    private:
        // Mountain's Information
        string name;
        string country;
        int ftElevation;

    public:
        // Setters
        void SetName(string name);
        void SetCountry(string country);
        void SetFtElevation(int ftElevation);

        // Getters
        string GetName();
        string GetCountry();
        int GetFtElevation();
        double ToMeters(int ftElevation); // 1m = 3.2808ft

};

#endif