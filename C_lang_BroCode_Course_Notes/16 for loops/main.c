#include <stdio.h>
#include <windows.h>  //Good for getting things like Sleep function

int main(){

    for(int i = 10; i >= 1; i--){  //for(initialisation;  condition to exit loop;  what to update every loop){function}
        Sleep(1000);               //Sleep(number); tells how many milliseconds a program should wait
        printf("%d\n", i);
    }

    Sleep(1000);
    printf("Happy New Year!");

    return 0;
}

