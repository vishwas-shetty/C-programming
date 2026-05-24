// Write functions to calculate area of square, a circle and a rectangel ?

#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float rad = 2;

    printf("Area is : %f", circleArea(rad));
    return 0;
}

float squareArea(float side)
{
    return side * side;
}

float circleArea(float rad)
{
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b)
{
    return a * b;
}