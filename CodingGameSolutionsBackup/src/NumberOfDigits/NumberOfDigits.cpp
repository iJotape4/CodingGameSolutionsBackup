//Puzzle Source: https://www.codingame.com/ide/puzzle/number-of-digits

#include "NumberOfDigits.h"

#include <iostream>

std::string NumberOfDigits::computeInput(int& n, int& k)
{
    int c = 0, digitsCounter=0;
    while(n>=c)
    {
        for(char ch : std::to_string(c))
        {
            int w = ch-'0';
            // std::cerr << "hello";
            if(w == k)
                digitsCounter++;
        }
        c++;  
    }
    
    return std::to_string(digitsCounter);
}