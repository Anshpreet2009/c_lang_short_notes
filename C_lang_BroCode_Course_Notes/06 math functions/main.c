#include <stdio.h>
#include <math.h> // Standard math library, it is important to include this if you are working with a lot of math

int main()
{
    float x1 = 5.9f; // Variables
    float x2 = 2.1f;
    float x3 = 3.7f;
    float x4 = -4.4f;
    float x5 = 1.2f;
    float x6 = 6.5f;
    float x7 = -0.9f;
    float x8 = 8.3f;
    float x9 = 7.7f;
    float x10 = -2.8f;

    x1 = sqrt(x1);   // Gives square root of no.
    x2 = pow(x2, 3); // pow(base, exponent) [power function]
    x3 = log(x3);    // Natural logarithm (base e)
    x4 = round(x4);  // Rounds to nearest integer
    x5 = ceil(x5);   // Rounds up to nearest integer
    x6 = floor(x6);  // Rounds down to nearest integer
    x7 = abs(x7);    // Absolute value
    x8 = sin(x8);    // Sine of angle in radians
    x9 = cos(x9);    // Cosine of angle in radians
    x10 = tan(x10);  // Tangent of angle in radians

    printf("%.2f\n", x1); // Print statements
    printf("%.2f\n", x2);
    printf("%.2f\n", x3);
    printf("%.2f\n", x4);
    printf("%.2f\n", x5);
    printf("%.2f\n", x6);
    printf("%.2f\n", x7);
    printf("%.2f\n", x8);
    printf("%.2f\n", x9);
    printf("%.2f\n", x10);
    return 0;
}
