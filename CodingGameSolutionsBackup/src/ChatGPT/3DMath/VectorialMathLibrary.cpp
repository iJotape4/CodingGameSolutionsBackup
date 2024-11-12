#include "VectorialMathLibrary.h"

float VectorialMathLibrary::DotProduct(FVector vector1, FVector vector2, FVector center)
{
        FVector a = (vector1 -center ).Normalize();
        FVector b = (vector2 -center ).Normalize();
        return a.x * b.x + a.y * b.y + a.z * b.z;
}

VectorialMathLibrary::FVector VectorialMathLibrary::CrossProduct(FVector a, FVector b)
{
        FVector result = FVector::Zero();
        result.x = a.y * b.z - a.z * b.y;
        result.y = a.z * b.x - a.x * b.z;
        result.z = a.x * b.y - a.y * b.x;
        return result;
}
