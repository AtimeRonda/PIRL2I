//
// Created by ronda on 22/11/16.
//
#include <iostream>
#include <vector>
#include <string>
#include "System.h"

#ifndef PIR_PLANE_H
#define PIR_PLANE_H

using std::string;
using std::vector;
using namespace std;

class Plane {
private:
    string name;
    vector <System> system_list;

public:
    Plane (string plane_name);
    void add_system (System s);
    void get_system_list() const;


};


#endif //PIR_PLANE_H
