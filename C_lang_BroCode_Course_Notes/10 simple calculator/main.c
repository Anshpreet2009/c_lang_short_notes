#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    double num1 = 0.0f;
    double num2 = 0.0f;
    double result = 0.0f;
    char operator = '\0';

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Select one of the 4 operators (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0){
                printf("Error: division by zero\n");
            }else {
                result = num1 / num2;
            }
            break;
        default:
            printf("Error: invalid operator\n");
            break;
    }

    printf("Result: %lf\n", result);

    return 0;
}



