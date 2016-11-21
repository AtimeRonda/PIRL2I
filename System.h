//
// Created by ronda on 18/11/16.
//

#include <iostream>
#include <vector>

#ifndef PIR_SYSTEM_H
#define PIR_SYSTEM_H

using std::string;

class System {
private:
    string system_name;
    int status = 0;
    vector <System> subsystem_list;



public:
    System(string name);
    //construit un système défini par son nom


    void display_system_info();
    //affiche les principaux paramètres du système

};


#endif //PIR_SYSTEM_H
