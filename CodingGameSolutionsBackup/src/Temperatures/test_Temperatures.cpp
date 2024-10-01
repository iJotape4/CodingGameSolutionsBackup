#include "Temperatures.h"
#include "gtest/gtest.h"
#include <limits>
#include <string>
#include <sstream>

class TemperatureTest : public ::testing::Test {
protected:
  Temperatures temp;
  int closestToZero;
  std::istringstream input;

  void SetUp() override {
    closestToZero = std::numeric_limits<int>::max();
  }
};

TEST_F(TemperatureTest, SimpleTestCase)
{
  input.str("5\n1 -2 -8 4 5\n");
  int n;
  input >> n;
    
  std::string result = temp.ComputeTemperatures(n, closestToZero, input);
  EXPECT_EQ(result, "1");
}

TEST_F(TemperatureTest, OnlyNegativeNumbers)
{
  input.str("5\n-12 -5 -137\n");
  int n;
  input >> n;
    
  std::string result = temp.ComputeTemperatures(n, closestToZero, input);
  EXPECT_EQ(result, "-5");
}

TEST_F(TemperatureTest, ChooseTheRightTemperature)
{
  input.str("6\n42 -5 12 21 5 24\n");
  int n;
  input >> n;
    
  std::string result = temp.ComputeTemperatures(n, closestToZero, input);
  EXPECT_EQ(result, "5");
}

TEST_F(TemperatureTest, ChooseTheRightTemperature2)
{
  input.str("6\n42 5 12 21 -5 24\n");
  int n;
  input >> n;
    
  std::string result = temp.ComputeTemperatures(n, closestToZero, input);
  EXPECT_EQ(result, "5");
}

TEST_F(TemperatureTest, ComplexTestCase)
{
  input.str("10\n-5 -4 -2 12 -40 4 2 18 11 5\n");
  int n;
  input >> n;
    
  std::string result = temp.ComputeTemperatures(n, closestToZero, input);
  EXPECT_EQ(result, "2");
}

TEST_F(TemperatureTest, NoTemperature)
{
  input.str("0");
  int n;
  input >> n;
    
  std::string result = temp.ComputeTemperatures(n, closestToZero, input);
  EXPECT_EQ(result, "0");
}