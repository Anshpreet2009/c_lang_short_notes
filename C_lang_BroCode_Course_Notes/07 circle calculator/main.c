#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0.0f;
    double area = 0.0f;
    double circumference = 0.0f;
    double surface_area = 0.0f;
    double volume = 0.0f;
    const double PI = 3.141592653589793;

    printf("Enter the radius of the circle:  ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);

    circumference = 2 * PI * radius;

    surface_area = 4 * PI * pow(radius, 2);

    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("\nFor a CIRCLE with radius %.0lf cm: \n", radius);
    printf("Area: %lf\n", area);
    printf("Circumference: %lf\n", circumference);

    printf("\nFor a SPHERE with radius %.0lf cm: \n", radius);
    printf("Surface Area: %lf\n", surface_area);
    printf("Volume: %lf\n", volume);
}
