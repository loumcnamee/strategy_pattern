// LibraryApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "Context.h"

int main()
{
    std::cout << "Starting strategy Pattern example..." << std::endl; 

    Context client;
    client.setStrategy(1);
    
    std::vector<float> d = {8.0, 4.0, 5.0, 9.0};
    
    float result = client.calculateMean(d);

    std::cout << "The arithmetic mean of ";
    for (int n : d)
        std::cout << n << " ";
    std::cout << " is " << result << std::endl;


    std::cout << "Closing Strategy Pattern Example" << std::endl;

}
