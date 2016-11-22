//
// Created by ronda on 18/11/16.
//

#include <iostream>
#include <vector>
#include <string>

#ifndef PIR_SYSTEM_H
#define PIR_SYSTEM_H

using std::string;
using std::vector;
using namespace std;

class System {
private:
    string name;
    int status = 0;
    vector <System> subsystem_list;


public:
    System(string system_name);
    //construit un système défini par son nom


    void display_system_info() const;
    string getName() const;

};


#endif //PIR_SYSTEM_H
