#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int tries = 0;
    int guess = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("***NUMBER GUESSING GAME***\n");

    do{
        printf("Choose a number between 1-100: ");
        scanf(" %d", &guess);

        if (guess < answer)
        {
            printf("TOO LOW!\n");
        }

        if (guess > answer)
        {
            printf("TOO HIGH!\n");
        }

        if (guess == answer)
        {
            printf("%d is the correct answer!\n", answer);
        }

        tries += 1;

    }while(guess != answer);

    printf("It took you %d tries\n", tries);

    return 0;
}



