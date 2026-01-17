#include <stdio.h>
#include <ctype.h>

int main (){
    char questions[][100] = {"What is the largest planet out of these?",
                             "What is the Hottest planet out of these?",
                             "What is the smallest planet out of these?",
                             "Who is the coolest guy in the world?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Neptune\nD. Earth",
                           "A. Mars\nB. Venus\nC. Earth\nD. Uranus",
                           "A. Mars\nB. Earth\nC. Pluto\nD. Sun",
                           "A. The creator of this game\nB. Ryan Gosling\nC. Isaac Newton\nD. Pewdiepie"};

    char answerkey[] = {'A', 'B', 'C', 'A'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    
    int score = 0;

        printf("*** QUIZ GAME ***");

    for (int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);

        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);   //Makes sure that lowercase letters are also valid

        if (guess == answerkey[i]){
            printf("\nCORRECT CHOICE!\n");
            score++;
        }
        else{
            printf("\nWRONG CHOICE!\n");
        }
    }

    printf("\nYou got %d out of 4 questions correct!", score);

    return 0;
}
