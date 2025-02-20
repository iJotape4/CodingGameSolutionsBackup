#include "HandShake.h"

#include <sstream>
#include <string>
using namespace std;

//I interpreted the handshake mechanic as each person is the vertex of a polygon.
// In this way, we need to sum the sides and diagonals of that polygon.
int handshake(int n)
{
    //Formula to get the diagoanls of a polygon
    int diagoanls = (n*(n-3))/2;
    
    //Add the number of sides of the polygon
    return n + diagoanls;
}

std::string HandShake::compute_input(int setsAmount, std::vector<std::string> sets)
{
    ostringstream output;

    for (int n_itr = 0; n_itr < setsAmount; n_itr++)
    {
        int n = stoi((sets[n_itr]));

        int result = handshake(n);
        output << result;

        if(n_itr != setsAmount - 1)
            output << " \n ";
    }
    return output.str();
}