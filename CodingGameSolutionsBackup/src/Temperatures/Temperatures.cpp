//Puzzle Source: https://www.codingame.com/ide/puzzle/temperatures

#include "Temperatures.h"
#include <cmath>
#include <string>

std::string Temperatures::ComputeTemperatures(int n, int& closestToZero, std::istream& input)
{
    if (n == 0)
        return "0";

    for (int i = 0; i < n; i++) 
    {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        input >> t;

        if (std::abs(t) < std::abs(closestToZero) || 
            (std::abs(t) == std::abs(closestToZero) && t > closestToZero))
        {
            closestToZero = t;
        }
    }
    return std::to_string(closestToZero);
}
