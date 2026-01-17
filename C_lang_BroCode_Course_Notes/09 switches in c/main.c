#include <stdio.h>

int main(){
    int dayOfWeek = 0;

    printf("Enter a number between 1 and 7: ");
    scanf("%d", &dayOfWeek);

    switch(dayOfWeek){              //switch(parameter)
        case 1:                     //case 1 = we are checking if the parameter equals 1
            printf("Monday");       
            break;                  //Breaking out of the switch
        case 2: 
            printf("Tuesday"); 
            break;
        case 3: 
            printf("Wednesday"); 
            break;
        case 4: 
            printf("Thursday"); 
            break;
        case 5: 
            printf("Friday"); 
            break;
        case 6: 
            printf("Saturday"); 
            break;
        case 7: 
            printf("Sunday"); 
            break;
        default:                     //If the parameter isn't equal to one of the switch cases
            printf("Please enter a number between 1 and 7"); 
            break;
    }



    return 0;
}

