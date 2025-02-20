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

TEST_F(Test_HandShake, Line)
{
    int setsAmount = 2;
    std::vector<std::string> sets
    {
        "1","2"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1");
}

TEST_F(Test_HandShake, Triangle)
{
    int setsAmount = 3;
    std::vector<std::string> sets
    {
        "1","2","3"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1 \n 3");
}

TEST_F(Test_HandShake, Square)
{
    int setsAmount = 4;
    std::vector<std::string> sets
    {
        "1","2","3","4"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1 \n 3 \n 6");
}

TEST_F(Test_HandShake, Pentagon)
{
    int setsAmount = 5;
    std::vector<std::string> sets
    {
        "1","2","3","4","5"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1 \n 3 \n 6 \n 10");
}

TEST_F(Test_HandShake, Hexagon)
{
    int setsAmount = 6;
    std::vector<std::string> sets
    {
        "1","2","3","4","5","6"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1 \n 3 \n 6 \n 10 \n 15");
}

TEST_F(Test_HandShake, Heptagon)
{
    int setsAmount = 7;
    std::vector<std::string> sets
    {
        "1","2","3","4","5","6","7"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1 \n 3 \n 6 \n 10 \n 15 \n 21");
}

TEST_F(Test_HandShake, Octagon)
{
    int setsAmount = 8;
    std::vector<std::string> sets
    {
        "1","2","3","4","5","6","7","8"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1 \n 3 \n 6 \n 10 \n 15 \n 21 \n 28");
}

TEST_F(Test_HandShake, Nonagon)
{
    int setsAmount = 9;
    std::vector<std::string> sets
    {
        "1","2","3","4","5","6","7","8","9"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1 \n 3 \n 6 \n 10 \n 15 \n 21 \n 28 \n 36");
}

TEST_F(Test_HandShake, Decagon)
{
    int setsAmount = 10;
    std::vector<std::string> sets
    {
        "1","2","3","4","5","6","7","8","9","10"
    };
    std::string result = classFile.compute_input(setsAmount, sets);
    EXPECT_EQ(result, "0 \n 1 \n 3 \n 6 \n 10 \n 15 \n 21 \n 28 \n 36 \n 45");
}