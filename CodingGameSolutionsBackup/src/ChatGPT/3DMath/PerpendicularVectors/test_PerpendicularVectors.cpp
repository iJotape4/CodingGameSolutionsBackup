#include <gtest/gtest.h>
#include <sstream>

#include "PerpendicularVectors.h"
#include "../VectorialMathLibrary.h"

class test_vector_math : public ::testing::Test {
protected:
    PerpendicularVectors classFile;
    std::istringstream input;

    void SetUp() override
    {
    }
};

TEST_F(test_vector_math, perpendicular_vectors)
{
    VectorialMathLibrary::FVector x(1.0f, 0.0f,0.0f);
    VectorialMathLibrary::FVector y (0.0f, 1.0f,0.0f);
    
    bool result = classFile.compute_input(x,y);
    EXPECT_EQ(result, true);
}

TEST_F(test_vector_math, non_perpendicular_vectors)
{
    VectorialMathLibrary::FVector x (1.0f, 2.0f, 3.0f);
    VectorialMathLibrary::FVector y (4.0f, 5.0f, 6.0f);
    
    bool result = classFile.compute_input(x,y);
    EXPECT_EQ(result, false);
}

TEST_F(test_vector_math, parallel_vectors)
{
    VectorialMathLibrary::FVector x (1.0f, 1.0f, 1.0f);
    VectorialMathLibrary::FVector y (2.0f, 2.0f, 2.0f);
    
    bool result = classFile.compute_input(x, y);
    EXPECT_EQ(result, false); // Parallel vectors are not perpendicular
}

TEST_F(test_vector_math, zero_vector_perpendicular)
{
    VectorialMathLibrary::FVector x (0.0f, 0.0f, 0.0f);
    VectorialMathLibrary::FVector y (1.0f, 1.0f, 1.0f);
    
    bool result = classFile.compute_input(x, y);
    EXPECT_EQ(result, true);
}

TEST_F(test_vector_math, negative_components)
{
    VectorialMathLibrary::FVector x (-1.0f, 2.0f, -3.0f);
    VectorialMathLibrary::FVector y (3.0f, -2.0f, 1.0f);
    
    bool result = classFile.compute_input(x, y);
    EXPECT_EQ(result, false); 
}

TEST_F(test_vector_math, same_vector_self_perpendicular)
{
    VectorialMathLibrary::FVector x (1.0f, 1.0f, 1.0f);
    VectorialMathLibrary::FVector y (1.0f, 1.0f, 1.0f);
    
    bool result = classFile.compute_input(x, y);
    EXPECT_EQ(result, false); // Same vector is not perpendicular to itself
}

TEST_F(test_vector_math, small_and_large_vectors)
{
    VectorialMathLibrary::FVector x (0.0001f, 0.0001f, 0.0001f);
    VectorialMathLibrary::FVector y (10000.0f, 10000.0f, 10000.0f);
    
    bool result = classFile.compute_input(x, y);
    EXPECT_EQ(result, false); // These vectors are parallel, not perpendicular
}