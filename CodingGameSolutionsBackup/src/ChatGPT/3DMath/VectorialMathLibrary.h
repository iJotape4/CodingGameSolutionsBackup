#pragma once
#include <cmath>

class VectorialMathLibrary
{
public:
    struct FVector
    {
        float x, y, z;
        FVector(float InX, float InY, float InZ) : x(InX), y(InY), z(InZ) {}

        float Magnitude() const { return sqrt((x * x) + (y * y) + (z * z)); }
        FVector Normalize() const
        {
            float Mag = Magnitude();
            if(Mag == 0)
                return FVector(0.0f, 0.0f, 0.0f);
            
            return FVector(x / Mag, y / Mag, z / Mag);
        }

        FVector operator-(const FVector& Other) const { return FVector(x - Other.x, y - Other.y, z - Other.z); }
        FVector operator+(const FVector& Other) const { return FVector(x + Other.x, y + Other.y, z + Other.z); }

        static FVector Zero() { return FVector(0.0f, 0.0f, 0.0f); }
        static FVector One() { return FVector(1.0f, 1.0f, 1.0f); }
    };
    
public:
    float DotProduct(FVector vector1, FVector vector2, FVector referencePoint = FVector::Zero());
    FVector CrossProduct(FVector a, FVector b);
};
