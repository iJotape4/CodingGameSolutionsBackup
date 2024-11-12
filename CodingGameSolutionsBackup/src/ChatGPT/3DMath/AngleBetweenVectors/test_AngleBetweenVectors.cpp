#include <gtest/gtest.h>
#include <sstream>

#include "AngleBetweenVectors.h"
#include "../VectorialMathLibrary.h"

class test_angle_between_vectors : public ::testing::Test {
protected:
    AngleBetweenVectors classFile;
    std::istringstream input;

    void SetUp() override {}
};

TEST_F(test_angle_between_vectors, angle_between_perpendicular_vectors)
{
    VectorialMathLibrary::FVector a (1.0f, 0.0f, 0.0f);
    VectorialMathLibrary::FVector b (0.0f, 1.0f, 0.0f);
    
    float result = classFile.ComputeInput(a, b);
    EXPECT_FLOAT_EQ(result, 90.00f);
}

TEST_F(test_angle_between_vectors, angle_between_parallel_vectors)
{
    VectorialMathLibrary::FVector a (2.0f, 3.0f, 4.0f);
    VectorialMathLibrary::FVector b (4.0f, 6.0f, 8.0f);
    
    float result = classFile.ComputeInput(a, b);
    EXPECT_FLOAT_EQ(result, 0.00f); // Vectors are parallel, so the angle is 0 degrees
}

TEST_F(test_angle_between_vectors, angle_between_oblique_vectors)
{
    VectorialMathLibrary::FVector a (1.0f, 1.0f, 1.0f);
    VectorialMathLibrary::FVector b (1.0f, 0.0f, 0.0f);
    
    float result = classFile.ComputeInput(a, b);
    EXPECT_FLOAT_EQ(result, 54.73f); // The angle between these vectors is 45 degrees
}
