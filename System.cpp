//
// Created by ronda on 18/11/16.
//

#include "System.h"

using std::string;

System::System(string name) {
    system_name = name;
}

void System::display_system_info()
{
    std::cout<<system_name<<std::endl;
    std::cout<<"Status: ";
    if (status) {
        std::cout<<"Problem detected"<<std::endl;
    }
    else {
        std::cout<<"Nominal"<<std::endl;
    }

}