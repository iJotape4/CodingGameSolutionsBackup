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

TEST_F(test_find_the_point, test02)
{
    int setsAmount = 10;
    std::vector<std::string> sets
    {
    "1 1 2 2",
    "4 3 5 2",
    "2 4 5 6",
    "1 2 2 2",
    "1 1 1 1",
    "1 2 2 1",
    "1 8 7 8",
    "9 1 1 1",
    "8 4 3 2",
    "7 8 9 1",
    };
    std::string result = classFile.ComputeInput(setsAmount, sets);
    EXPECT_EQ(result, "3 3 \n 6 1 \n 8 8 \n 3 2 \n 1 1 \n 3 0 \n 13 8 \n -7 1 \n -2 0 \n 11 -6");
}