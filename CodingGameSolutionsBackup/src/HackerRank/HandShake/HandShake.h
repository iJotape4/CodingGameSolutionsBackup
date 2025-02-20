// At the annual meeting of Board of Directors of Acme Inc.
// If everyone attending shakes hands exactly one time with every other attendee, how many handshakes are there?

#pragma once
#include <string>
#include <vector>

class HandShake
{
public:
    std::string compute_input(int setsAmount, std::vector<std::string> sets);
};