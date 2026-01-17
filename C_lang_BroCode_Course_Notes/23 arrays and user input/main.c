#include <stdio.h>

int main(){
    //Setting an array's value to {0} makes all the elements equal to 0;
    int scores[5] = {0};

    for (int i = 0; i < 5; i++){
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", scores[i]);
    }

    return 0;
}

