#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age){   //void funcName(Values you want the function to use){the function itself}
    printf("\nHappy Birthday to you!");     //You can choose any datatype like float, int etc.(or void if you dont want the function to return any value)
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday, Dear %s!", name);
    printf("\nHappy Birthday to you!");
    printf("\nCongratulations on turning %d!\n", age);
}

int main(){
    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);    //funcName(Values you want the function to be aware of);     This calls the function in the main function, Make sure these are in order
    
    return 0;
}
