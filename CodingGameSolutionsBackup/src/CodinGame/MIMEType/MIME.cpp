#include "MIME.h"

#include <iostream>
#include <sstream>

std::string MIME::ComputeInput(int elements, int elementsToAnalize, std::vector<std::string> &sets)
{
    std:std::ostringstream result;

    //Handle Unknown Types
    while (elementsToAnalize > elements)
    {
        result << "UNKNOWN\n";
        --elementsToAnalize;
    }
        
    for (int i = elementsToAnalize - 1; i >= 0; --i)
    {
        sets[i] = sets[i].substr(sets[i].find(" ") + 1);
        result << sets[i];
        if(i>0)
            result << "\n";
    }
    
   return result.str();
}