#include <stdio.h>
#include <string.h>

int main(){
    char name[3][30] = {0};

    for (int i = 0; i < 3; i++){
        printf("Enter your name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strlen(name[i]) - 1] = '\0';
    }

    for (int i = 0; i < 3; i++){
        printf("%s\n", name[i]);
    }
    

    return 0;
}

