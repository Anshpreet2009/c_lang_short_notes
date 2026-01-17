#include <stdio.h>
#include <windows.h>

int main(){

    //break; (STOP) ------- Breaks out of the current cycle of a loop
    //continue; (SKIP) ---- Skips the current cycle of a loop

    for (int i = 1; i <= 10; i++){
        
        if (i == 8){
            break;
        }

        if (i == 4){
            continue;
        }

        Sleep(1000);
        printf("%d\n", i);
    }



    return 0;
}



