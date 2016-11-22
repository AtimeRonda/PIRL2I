#include "main.h"


int main() {

    System Fuel_System = System("Fuel System");
    Fuel_System.display_system_info();

    Plane A320=Plane("A320");
    A320.add_system(Fuel_System);
    A320.get_system_list();

    return 0;
}