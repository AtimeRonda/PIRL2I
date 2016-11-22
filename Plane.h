//
// Created by ronda on 22/11/16.
//
#include <iostream>
#include <vector>
#include <string>
#include "System.h"
#include "Checklist.h"

#ifndef PIR_PLANE_H
#define PIR_PLANE_H

using namespace std;

class Plane {
private:
    string name;
    vector <System> system_list;
    vector <Checklist> checklist_list;

public:
    Plane (string plane_name);
    void add_system (System s);
    void get_system_list() const;


};


#endif //PIR_PLANE_H
