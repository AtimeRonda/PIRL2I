//
// Created by ronda on 22/11/16.
//

#include <iostream>
#include <string>
#include <vector>

#ifndef PIR_PILOT_ACTION_H
#define PIR_PILOT_ACTION_H

using namespace std;

class Pilot_Action {
private:
    string name;
    bool status;
    string description;
    string consequences;
public:
    Pilot_Action(string name_action);

};


#endif //PIR_PILOT_ACTION_H
