#include <stdio.h>
#include <stdlib.h>



int main(){
    //realloc means Re-allocation
    //It resizes previously allocated memory
    //It allows for more flexibility while assigning sizes
    //Its usual format is:
    //realloc(pointer, total size);

    int number = 0;
    printf("Enter number of prices: ");
    scanf(" %d", &number);

    float *prices = malloc(number * sizeof(float));

    if (prices == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < number; i++){
        printf("Enter price #%d: $", i + 1);
        scanf(" %f", &prices[i]);
    }

    //Here's where the realloc function comes in:
    int newNum = 0;
    printf("How many more would you like to add: ");
    scanf(" %d", &newNum);

    float *temp = realloc(prices, newNum * sizeof(float));

    if (temp == NULL){
        printf("Memory reallocation failed!\n");
    }
    else{
        prices = temp;

        for (int i = number; i < (newNum + number); i++){
            printf("Enter price #%d: $", i + 1);
            scanf(" %f", &prices[i]);
        }

        for (int i = 0; i < (newNum + number); i++){
            printf("$%.2f ", prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}



