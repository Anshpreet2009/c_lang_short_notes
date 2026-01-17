#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));  //Generates a random seed using the time so that numbers are unique everytime the function is run

    int min = 1;
    int max = 6;

    int randomNum = (rand() % (max - min + 1)) + min;  //This formula generates a number between the min and max values provided

    printf("%d", randomNum);

    return 0;
}

