// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in November 2020
// Perimeter and area of a rectangle with user inputs

#include <iostream>

int main() {
    int length;
    int width;
    int area;
    int perimeter;

    std::cout << "Give me measurements of a rectangle!" << std::endl;
    std::cout << "Please enter the length (mm): ";
    std::cin >> length;
    std::cout << "Please enter the width (mm): ";
    std::cin >> width;
    area = length * width;
    perimeter = 2*(length + width);
    std::cout << "Area: " << area << "mm²" << std::endl;
    std::cout << "Perimeter: " << perimeter << "mm" << std::endl;
}
