#include <gtest/gtest.h>
#include "HandShake.h"

class Test_HandShake : public ::testing::Test
{
    protected:
    HandShake classFile;
    std::istringstream input;

    void SetUp() override
    {
    }
};

TEST_F(Test_HandShake, test01)
{
    int setsAmount = 2;
    std::vector<std::string> sets
    {
        "1","2"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1");
}