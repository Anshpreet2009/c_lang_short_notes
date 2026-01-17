#include <stdio.h>

int main(){
    //A 2D array is an array that has arrays inside of it
    //Imagine them as a 2d grid with rows and columns
    //The format is the same as an array except you add 2 of these: []
    //Make sure to specify the maximum number of elements in each array in the second square bracket

    int numbers[][3] = {{10, 20, 30}, 
                        {40, 50, 60}, 
                        {70, 80, 90}};

    //To get a value in the 2D array, type the index of the array, then the index of the element in that array

    printf("%d \n\n\n", numbers[0][0]);

    //Here's another example

    char numpad[][3] = {{'1', '2', '3'}, 
                        {'4', '5', '6'}, 
                        {'7', '8', '9'}, 
                        {'*', '0', '#'}};

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;
}
