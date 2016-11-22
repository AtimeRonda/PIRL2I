//
// Created by ronda on 22/11/16.
//


#include <iostream>
#include <string>
#include <vector>
#include "Pilot_Action.h"

#ifndef PIR_CHECKLIST_H
#define PIR_CHECKLIST_H

using namespace std;

class Checklist {
private:
    string name;
    vector <Pilot_Action> TODO;
public:
    Checklist (string checklist_name);
};


#endif //PIR_CHECKLIST_H
