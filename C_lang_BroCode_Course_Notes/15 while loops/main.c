#include <stdio.h>

int main(){
    int number = -1;

    while(number <= 0){                                     //While this condition is true
        printf("Enter a number greater than 0 to exit: ");  //Run this code
        scanf(" %d", &number);
    }

    return 0;
}
