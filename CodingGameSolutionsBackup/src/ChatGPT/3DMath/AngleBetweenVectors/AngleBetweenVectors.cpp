#include "AngleBetweenVectors.h"
#include <cmath>

float AngleBetweenVectors::ComputeInput(VectorialMathLibrary::FVector a, VectorialMathLibrary::FVector b)
{
    float magnitudeA = a.Magnitude();
    float magnitudeB = b.Magnitude();
    float dotProduct = VectorialMathLibrary::DotProduct(a, b);

    float angle = acos(dotProduct/ (magnitudeA * magnitudeB));
    float convertedAngle = VectorialMathLibrary::RadiansToDegrees(angle);

    //Truncates the result to 2 decimal places
     return static_cast<int>(convertedAngle * 100) / 100.0f;
}
