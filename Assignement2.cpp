// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This is the Perimeter and Area
// This program calculates the circumference

#include <iostream>
#include <cmath>

int main() {
    // This function calculates circumference
    float radius;
    float circumference;

    // input
    std::cout << "Enter radius of a circle (mm): ";
    std::cin >> radius;

    // process
    circumference = (2 * M_PI * radius);

    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << " mm " << std::endl;
    std::cout << "\nDone." << std::endl;
}
