//Puzzle Source: https://www.codingame.com/ide/puzzle/number-of-digits

#include "NumberOfDigits.h"

#include <iostream>

std::string NumberOfDigits::computeInput(int& n, int& k)
{
    int count = 0;
    for (long long i = 1; i <= n; i *= 10) {
        long long divider = i * 10;
        count += (n / divider) * i + std::min(std::max(n % divider - k * i + 1, 0LL), i);
    }
    return std::to_string( count);
}