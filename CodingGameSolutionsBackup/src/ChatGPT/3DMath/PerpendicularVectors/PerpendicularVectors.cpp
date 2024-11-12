#include "PerpendicularVectors.h"

bool PerpendicularVectors::compute_input(VectorialMathLibrary::FVector x, VectorialMathLibrary::FVector y)
{
    float result = VectorialMathLibrary::DotProduct(x,y);
    return result == 0;
}
