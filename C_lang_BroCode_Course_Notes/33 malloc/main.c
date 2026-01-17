#include <stdio.h>
#include <stdlib.h>  //Make sure to include the standard library for the malloc function

int main(){
    //malloc is a function in C that dynamically allocates memory
    //It is short for memory allocation

    int number = 0;
    printf("Enter number of grades: ");
    scanf(" %d", &number);

    char *grades = malloc(number * sizeof(char));

    for (int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }

    free(grades);  //Make sure to return the "rented space" of the variable whose memory you have allocated
    grades = NULL;  //Make sure to add this to avoid 'dangling' pointers

    return 0;
}




