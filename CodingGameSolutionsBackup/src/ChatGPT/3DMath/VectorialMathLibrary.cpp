#include "VectorialMathLibrary.h"

float VectorialMathLibrary::DotProduct(FVector vector1, FVector vector2, FVector referencePoint)
{
    FVector a = (vector1 -referencePoint );
    FVector b = (vector2 -referencePoint );
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

VectorialMathLibrary::FVector VectorialMathLibrary::CrossProduct(FVector a, FVector b)
{
        FVector result = FVector::Zero();
        result.x = a.y * b.z - a.z * b.y;
        result.y = a.z * b.x - a.x * b.z;
        result.z = a.x * b.y - a.y * b.x;
        return result;
}

float VectorialMathLibrary::DotProductNormalized(FVector vector1, FVector vector2, FVector referencePoint)
{
    FVector a = (vector1 -referencePoint ).Normalize();
    FVector b = (vector2 -referencePoint ).Normalize();
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

float VectorialMathLibrary::RadiansToDegrees(float radians)
{
    float M_PI = 3.14159265358979323846;
    return radians * 180.0f / M_PI;
}
