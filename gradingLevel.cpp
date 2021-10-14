// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program calculates the area of a triangle

#include <iostream>
#include <string>
#include <iomanip>

float convertToPercentage(std::string gradeLevel) {
    // This function converts Ontario's Grading to percentage
    float percentage;

    // process & output
    if (gradeLevel == "4+") {
        percentage = 97.0;
    } else if (gradeLevel == "4") {
        percentage = 90.5;
    } else if (gradeLevel == "4-") {
        percentage = 83.0;
    } else if (gradeLevel == "3+") {
        percentage = 78.0;
    } else if (gradeLevel == "3") {
        percentage = 74.5;
    } else if (gradeLevel == "3-") {
        percentage = 71.0;
    } else if (gradeLevel == "2+") {
        percentage = 68.0;
    } else if (gradeLevel == "2") {
        percentage = 64.5;
    } else if (gradeLevel == "2-") {
        percentage = 61.0;
    } else if (gradeLevel == "1+") {
        percentage = 58.0;
    } else if (gradeLevel == "1") {
        percentage = 54.5;
    } else if (gradeLevel == "1-") {
        percentage = 51.0;
    } else if (gradeLevel == "R") {
        percentage = 24.5;
    } else {
        percentage = -1.0;
    }

    return percentage;
}

int main() {
    // This function is the main function
    std::string userInput;

    // input
    std::cout << "Enter a grade level (Ontario rubric): ";
    std::cin >> userInput;

    // call function
    std::cout << "The percentage of " << userInput << " is " <<
    std::fixed << std::setprecision(1)
    << convertToPercentage(userInput) << "%." << std::endl;

    std::cout << "\nDone." << std::endl;
}
