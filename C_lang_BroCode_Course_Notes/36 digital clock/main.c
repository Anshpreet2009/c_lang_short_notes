#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>



int main(){
    time_t rawtime = 0;  //January 1, 1970 (Epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("*** DIGITAL CLOCK ***\n");

    while (isRunning){
        time(&rawtime);  //Gets time
        pTime = localtime(&rawtime);  //Updates time according to the system's time

        //Instead of writing (*pTime).tm_hour, writing pTime->tm_hour is much more readable
        printf("\r%02ld:%02ld:%02ld", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);  //%ld stands for long decimal
        //The "\r" means re-writing

        sleep(1);
    }

    return 0;
}


