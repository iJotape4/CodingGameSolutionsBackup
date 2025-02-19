#include <gtest/gtest.h>

#include  "NumberOfDigits.h"

class test_number_of_digits : public ::testing::Test {
protected:
    NumberOfDigits classFile;
    std::istringstream input;

    void SetUp() override
    {
        
    }
};

TEST_F(test_number_of_digits, n12)
{
    int n =12;
    int k = 2;
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "2");
}
TEST_F(test_number_of_digits, n0)
{
    int n =0;
    int k = 3;
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "0");
}
TEST_F(test_number_of_digits, n219)
{
    int n =219;
    int k = 5;
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "42");
}
TEST_F(test_number_of_digits, n4218)
{
    int n =4218;
    int k = 4;
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "1461");
}
TEST_F(test_number_of_digits, n10000)
{
    int n =10000;
    int k = 6;
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "4000");
}
TEST_F(test_number_of_digits, n248919)
{
    int n =248919;
    int k = 7;
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "119682");
}
TEST_F(test_number_of_digits, n841772)
{
    int n =841772;
    int k = 8;
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "458220");
}
TEST_F(test_number_of_digits, n1283048)
{
    int n =1283048;
    int k = 9;
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "732904");
}
TEST_F(test_number_of_digits, n824883294)
{
    int n =824883294;
    int k = 1;
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "767944060");
}