#include "Unary.h"
#include "gtest/gtest.h"
#include <sstream>

class TemperatureTest : public ::testing::Test {
protected:
    Unary unary_;
    std::istringstream input;

    void SetUp() override
    {
        
    }
};