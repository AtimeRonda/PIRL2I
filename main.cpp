#include <iostream>
#include <stdio.h>
#include <djnn/core-dev.h>
#include <djnn/gui-dev.h>
#include <djnn/base-dev.h>
#include <djnn/input-dev.h>
#include "System.h"
#include "Plane.h"


int main() {

    System Fuel_System = System("Fuel System");
    Fuel_System.display_system_info();

    Plane A320=Plane("A320");
    A320.add_system(Fuel_System);
    A320.get_system_list();

    return 0;
}