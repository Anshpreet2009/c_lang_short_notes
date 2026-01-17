#include <stdio.h>

enum day{
SUNDAY = 1 , MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

typedef enum{
FAILURE = 0, PENDING = 1, SUCCESS = 2
}status;

//It's good practice to put enums in a typedef so that it is more readable

//By default, the first elements will hold a value of 0, and it increments by 1 with each successive element
//We can also change the value of the first element, and the rest of the elements will follow that
//We can also change the value of every single element by hand

int main(){
    //enum is a user-defined datatype that consists of a set of named integer constants
    //Its benefit is that it replaces numbers with readable names

    enum day today = MONDAY;

    printf("%d", today);

    status current = SUCCESS; //We dont's have to write the enum keyword due to typedef

    printf("\nThe mission's progress is %d percent", current * 50);

    return 0;
}

