#ifndef MOUNTAINSH
#define MOUNTAINSH

#include <iostream>
#include <string>
using namespace std;

class Mountains {

    private:
        string name;
        string country;
        int ftElevation;

    public:
        void SetName(string name);
        void SetCountry(string country);
        void SetFtElevation(int ftElevation);

        string GetName();
        string GetCountry();
        int GetFtElevation();
        double ToMeters(int ftElevation); // 1m = 3.2808ft

};

#endif