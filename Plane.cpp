//
// Created by ronda on 22/11/16.
//

#include "Plane.h"


/***********Constructors of Plane*************/

Plane::Plane (string plane_name):name(plane_name){}


/***********Methods of Plane ********************/


//Add a system to the list of systems of the plane

void Plane::add_system(System s) {

    cout<<"****************Plane Builder~~~~System Adder*********************"<<endl;
    cout<<"Adding "<<s.getName()<<" to "<<name<<endl;
    system_list.push_back(s);
}

//List the systems of the plane

void Plane::get_system_list() const {

    cout<<"*******************Plane diagnostic~~~~System listing********************"<<endl;

    vector <System>::const_iterator it;
    for (it=system_list.begin(); it != system_list.end(); it++){
        it->getName();
    }

    cout<<"**********System list done**********"<<endl;


}