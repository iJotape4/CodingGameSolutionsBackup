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
    std::string n ="12";
    std::string k = "2";
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "2");
}
TEST_F(test_number_of_digits, n0)
{
    std::string n ="0";
    std::string k = "3";
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "0");
}
TEST_F(test_number_of_digits, n219)
{
    std::string n ="219";
    std::string k = "5";
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "42");
}
TEST_F(test_number_of_digits, n4218)
{
    std::string n ="4218";
    std::string k = "4";
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "1461");
}
TEST_F(test_number_of_digits, n10000)
{
    std::string n ="10000";
    std::string k = "6";
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "4000");
}
TEST_F(test_number_of_digits, n248919)
{
    std::string n ="248919";
    std::string k = "7";
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "119682");
}
TEST_F(test_number_of_digits, n841772)
{
    std::string n ="841772";
    std::string k = "8";
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "458220");
}
TEST_F(test_number_of_digits, n1283048)
{
    std::string n ="1283048";
    std::string k = "9";
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "732904");
}
TEST_F(test_number_of_digits, n824883294)
{
    std::string n ="824883294";
    std::string k = "7";
    std::string result = classFile.computeInput(n,k);
    EXPECT_EQ(result, "767944060");
}
