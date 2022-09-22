// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Sep. 21, 2022
// This program calculates the area and perimeter of a circle with radius 15mm

#include <iostream>
#include <cmath>

int main() {
    float radius = 15;
    std::cout << "The area and perimeter of a circle";
    std::cout << "with a radius of 15mm are:\n" << std::endl;
    std::cout << "area: pi*15^2 = " << (M_PI*pow(15, 2)) << "mm²\n"
    << std::endl;
    std::cout << "perimeter: 15*2*pi = " << (15*2*M_PI) << "mm" << std::endl;
}
