#include <stdio.h>
#include <string.h>

int main(){
    //Ternary operators are basically if statements but much shorter
    //Here is the usual format of ternary operators:
    //(condition) ? value_if_true : value_if_false
    //For example:

    int x = 0;
    int y = 0;
    
    printf("Enter value of x: ");
    scanf(" %d", &x);

    printf("Enter value of y: ");
    scanf(" %d", &y);

    int max = (x > y) ? x : y;
    printf("The bigger number is: %d", max);

    //This code is basically saying:
    //If the condition of x > y is true, value of max is x
    //If this condition is false, value of max is y



    //Here's another example telling if a number is even or odd:

    int i;

    printf("\nEnter any value: ");
    scanf(" %d", &i);

    printf("The number is %s", (i % 2 == 0) ? "even" : "odd");

    return 0;
}







