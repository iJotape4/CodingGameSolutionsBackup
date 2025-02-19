//Puzzle Source : https://www.codingame.com/ide/puzzle/unary

#include "Unary.h"
#include <string>
#include <sstream>
#include <bitset>

std::string Unary::ComputeInput(std::string& input)
{
    std::ostringstream result;

    input=  stringTo7BitBinary(input);

    for(int i=0; i<input.length();i++)
    {
        if(input[i] == ' ' && i == input.length()-1)
        break;

        char currentChar =input[i];

        if(currentChar == '1')
        {
            result << "0 ";
        }
        else
        {
            result << "00 ";
        }

        for(int j =0;j<input.length()-i;j++)
        {
            if(input[i+j] == ' ')
            {
                if(i+j+1 == input.length())
                i++;
                
                else
                continue;
            }

            if (input[i+j] == currentChar)
            {
                result << "0";
            }
            else
            { 
                i +=j-1;
                result << " ";
                break;
            }    
        }
    }

    std::string output = result.str();

    if (!output.empty() && output.back() == ' ')
    {
        output.pop_back();
    }

    return output;
}

std::string Unary::stringTo7BitBinary(const std::string& str)
{
    std::string binaryString;
    for (char c : str) {
        std::bitset<7> binary(c);
        binaryString += binary.to_string() + " ";
    }
    return binaryString;
}