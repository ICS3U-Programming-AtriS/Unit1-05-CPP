// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: Feb 18, 2025
// Calculates the Perimeter and Area of a rectangle with set dimensions

#include <iostream>

int main() {
    int length = 15;
    int width = 19;
    std::cout << "\033[1m";  // BOLDS THE OUTPUT
    std::cout << "If a rectangle has the dimensions:" << std::endl;
    std::cout << (length) << "cm x " << (width) << "cm";
    std::cout << std::endl;
    std::cout << "The Area is " << (length*width) << "cm\u00b2" << std::endl;
    std::cout << "The Perimeter is " << (2 * (length + width)) << "cm";
    std::cout << std::endl << std::endl;
}
