#include <gtest/gtest.h>
#include "FindThePoint.h"

class test_find_the_point : public ::testing::Test
{
protected:
    FindThePoint classFile;
    std::istringstream input;

    void SetUp() override
    {
        
    }
};

TEST_F(test_find_the_point, test01)
{
    int setsAmount = 2;
    std::vector<std::string> sets
    {
        "0 0 1 1",
        "1 1 2 2"
    };
    std::string result = classFile.ComputeInput(setsAmount, sets);
    EXPECT_EQ(result, "2 2 \n 3 3");
}