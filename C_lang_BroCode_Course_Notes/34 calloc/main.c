#include <stdio.h>
#include <stdlib.h>  //Make sure to include this library for the calloc function

int main(){
    //calloc means Contiguous allocation
    //It allocates memory dynamically AND sets all allocated bytes to 0
    //malloc is faster, but calloc leads to lesser bugs
    //Its usual format is:
    //calloc(number of elements, size of elements);

    int number = 0;
    printf("Enter the number of players: ");
    scanf(" %d", &number);

    int *scores = calloc(number, sizeof(int));
    //If we had used malloc function, for example:
    //int *scores = malloc(number * sizeof(int));
    //It would have returned garbage values
    //Because of the calloc function, instead of garbage values, it assigns 0 to the values by default

    if (scores == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < number; i++){
        printf("Enter score #%d: ", i + 1);
        scanf(" %d", &scores[i]);
    }

    for (int i = 0; i < number; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;

    return 0;
}




