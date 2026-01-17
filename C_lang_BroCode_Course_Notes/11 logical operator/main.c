#include <stdio.h>
#include <stdbool.h>

int main(){
    int num1 = 0;
    int num2 = 0;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);

    int choice = 0;

    printf("What would you like to check?(Type in 1, 2, or 3)\n");
    printf("1. Wether both numbers are greater than 0\n");
    printf("2. Wether atleast one of these numbers is greater than 0\n");
    printf("3. Wether both numbers are equal or not\n");

    scanf("%d", &choice);

    switch (choice){
        //logical operators are used to combine or modify boolean expressions
        //&& means and
        //if (condition 1 && condition 2){function}
        //Here, both conditions have to be met in order to execute the function
        case 1:
            if((num1 > 0) && (num2 > 0)){
                printf("These numbers are greater than 0.");
            }
            else{
                printf("These numbers are not greater than 0.");
            }
            break;
        //|| means or
        //if (condition 1 || condition 2){function}
        //Here, atleast one condition has to be met in order to execute the function
        case 2:
            if((num1 > 0) || (num2 > 0)){
                printf("Atleast one of these numbers is greater than 0.");
            }
            else{
                printf("Both of these numbers are not greater than 0.");
            }
            break;
        //!  means not
        //if (!condition){function}
        //Here, if the condition is not true, the function is executed
        case 3:
            if(num1 != num2){
                printf("These numbers are not equal");
            }
            else{
                printf("These numbers are equal");
            }
            break;
        default:
            printf("Invalid Choice! Choose either 1, 2, or 3");
            break;
    }

    return 0;
}




