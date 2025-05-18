// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: May 18th, 2025
// Min number in array program in c++

#include <array>
#include <iostream>
#include <random>
#include <string>

const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

int getMinValue(const std::array<int, MAX_ARRAY_SIZE> array) {
    // Initialize min
    int min = 100;

    // Compare each element to min and update it to be the larger number
    for (size_t counter = 0; counter < array.size(); counter++) {
        if (array[counter] < min) {
            min = array[counter];
        }
    }

    // Return min
    return min;
}

int main() {
    // Initialize seed and array
    unsigned int seed = time(0);
    std::array<int, MAX_ARRAY_SIZE> array;
    // Append and display random numbers 1-99 10 times
    for (int counter = 0; counter < 10; counter++) {
        int random_number = (rand_r(&seed) % MAX_NUM - MIN_NUM) + MIN_NUM + 1;
        std::cout << "Added " << random_number << " to the array!\n";
        array[counter] = random_number;
    }

    // Set min to function call passing through array and display it
    int min = getMinValue(array);
    std::cout << "The lowest number in your array was " << min;
}
