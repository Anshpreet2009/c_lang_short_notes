#include <stdio.h>

double square(double num){             //I have declared this function with int, as it is supposed to return an integer value
    return num * num;                  //Returns this thing back to where the function is called
}

double cube(double num){
    return num * num * num;
}

int main(){
    double x = square(2);
    double y = cube(3);
    double z = square(4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    return 0;
}
