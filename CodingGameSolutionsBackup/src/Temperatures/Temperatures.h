#pragma once
#include <istream>
#include <string>

class Temperatures
{
public:
    std::string ComputeTemperatures(int n, int& closestToZero, std::istream& input);
};