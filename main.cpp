// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Array

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

float pentagon(float side) {
    // process
    return side * 5;
}

int main() {
    // main function for calling function

    // defining variables
    std::string temp;
    float side;

    try {
        // input
        cout << "Length of one side(mm): ";
        cin >> temp;
        side = std::stof(temp);

        // output/calling function
        cout << "Perimeter of your pentagon is: " << pentagon(side);
        cout << " mm" << endl;
    } catch (std::invalid_argument) {
        // error
        cout << "Please input a number" << endl;
    }

    // output finished
    cout << endl;
    cout << "Done." << endl;
}
