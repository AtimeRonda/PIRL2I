#include <iostream>
#include <stdio.h>
#include <djnn/core-dev.h>
#include <djnn/gui-dev.h>
#include <djnn/base-dev.h>
#include <djnn/input-dev.h>
#include "System.h"


int main() {

    System Plane = System("A320");
    Plane.display_system_info();

    return 0;
}