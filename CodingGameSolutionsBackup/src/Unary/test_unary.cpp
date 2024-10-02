#include "Unary.h"
#include "gtest/gtest.h"
#include <sstream>

class test_unary : public ::testing::Test {
protected:
    Unary classFile;
    std::istringstream input;

    void SetUp() override
    {
        
    }
};

TEST_F(test_unary, CharacterC)
{
    std::string input ="C";
    std::string result = classFile.ComputeInput(input);
    EXPECT_EQ(result, "0 0 00 0000 0 00");
}

TEST_F(test_unary, Message_CC)
{
    std::string input ="CC";
    std::string result = classFile.ComputeInput(input);
    EXPECT_EQ(result, "0 0 00 0000 0 000 00 0000 0 00");
}

TEST_F(test_unary, Character_PercentageSymbol)
{
    std::string input ="%";
    std::string result = classFile.ComputeInput(input);
    EXPECT_EQ(result, "00 0 0 0 00 00 0 0 00 0 0 0");
}
TEST_F(test_unary, Message_From_Chuck_Norris)
{
    std::string input ="Chuck Norris' keyboard has 2 keys: 0 and white space.";
    std::string result = classFile.ComputeInput(input);
    EXPECT_EQ(result, "0 0 00 0000 0 0000 00 0 0 0 00 000 0 000 00 0 0 0 00 0 0 000 00 000 0 0000 00 0 0 0 00 0 0 00 00 0 0 0 00 00000 0 0 00 00 0 000 00 0 0 00 00 0 0 0000000 00 00 0 0 00 0 0 000 00 00 0 0 00 0 0 00 00 0 0 0 00 00 0 0000 00 00 0 00 00 0 0 0 00 00 0 000 00 0 0 0 00 00000 0 00 00 0 0 0 00 0 0 0000 00 00 0 0 00 0 0 00000 00 00 0 000 00 000 0 0 00 0 0 00 00 0 0 000000 00 0000 0 0000 00 00 0 0 00 0 0 00 00 00 0 0 00 000 0 0 00 00000 0 00 00 0 0 0 00 000 0 00 00 0000 0 0000 00 00 0 00 00 0 0 0 00 000000 0 00 00 00 0 0 00 00 0 0 00 00000 0 00 00 0 0 0 00 0 0 0000 00 00 0 0 00 0 0 00000 00 00 0 0000 00 00 0 00 00 0 0 000 00 0 0 0 00 00 0 0 00 000000 0 00 00 00000 0 0 00 00000 0 00 00 0000 0 000 00 0 0 000 00 0 0 00 00 00 0 0 00 000 0 0 00 00000 0 000 00 0 0 00000 00 0 0 0 00 000 0 00 00 0 0 0 00 00 0 0000 00 0 0 0 00 00 0 00 00 00 0 0 00 0 0 0 00 0 0 0 00 00000 0 000 00 00 0 00000 00 0000 0 00 00 0000 0 000 00 000 0 0000 00 00 0 0 00 0 0 0 00 0 0 0 00 0 0 000 00 0");
}