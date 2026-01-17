#include <stdio.h>

int main()
{
    float x = 2;  // Although we are using a float here, Using an int for x is perfectly fine as it will be promoted to float anyways
    float y = 3;  // Using a float for y is recommended (for precision while dividing)
    float z1 = 0; // The result of operations is recommended to be also a float for precision while dividing
    float z2 = 0;
    float z3 = 0;
    float z4 = 0;
    float z5 = 0;
    float z6 = 0;
    float z7 = 1;
    float z8 = 1;
    float z9 = 0;
    float z10 = 0;

    z1 = x + y;
    printf("%+.2f\n", z1); // + is for Addition

    z2 = x - y;
    printf("%+.2f\n", z2); // - is for Subtraction

    z3 = x * y;
    printf("%+.2f\n", z3); // * is for Multiplication

    z4 = x / y;
    printf("%+.2f\n", z4); // / is for Division

    //Here are shorter versions of arithmatic operations:

    z5 += 5;
    printf("%+.2f\n", z5); // Adding 5 to the variable, same as z5 = z5 + 5;

    z6 -= 5;
    printf("%+.2f\n", z6); // Subtracting 5 from the variable, same as z6 = z6 - 5;

    z7 *= 5;
    printf("%+.2f\n", z7); // Multiplying the variable by 5, same as z7 = z7 * 5;

    z8 /= 5;
    printf("%+.2f\n", z8); // Dividing the variable by 5, same as z8 = z8 / 5;

    z9++;
    printf("%+.2f\n", z9); // Increments the variable by 1

    z10--;
    printf("%+.2f\n", z10); // Decrements the variable by 1
}
