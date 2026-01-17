#include <stdio.h>
#include <string.h>

int main(){
    char symbol = '\0';
    int columns = 0;
    int rows = 0;


    printf("Enter a symbol: ");
    scanf(" %c", &symbol);

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter columns: ");
    scanf("%d", &columns);


    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}



