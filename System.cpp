//
// Created by ronda on 18/11/16.
//

#include "System.h"

/************Constructors of System **************/

System::System(string system_name):name(system_name){}

/*************Methods of System***************/



//Displays essential info about a system
void System::display_system_info() const {
    cout<<"***************System diagnostic info*****************"<<endl;
    std::cout<<name<<std::endl;
    std::cout<<"Status: ";
    if (status) {
        std::cout<<"Problem detected !"<<std::endl;
    }
    else {
        std::cout<<"Nominal"<<std::endl;
    }
}

string System::getName() const {
    cout<<name<<endl;

    return name;

}