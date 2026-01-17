#include <stdio.h>   //include standard input output library header
#include <stdbool.h> //include standard boolean library header, this is needed for working with booleans

int main() // main function of the program
{
    char symbol1 = '!'; // this data type holds a single character
    char symbol2 = '@'; // Its value can be set to '\0' to represent the null character
    char symbol3 = '#';

    char name1[] = "Papyrus"; // this data type holds an array of characters (string)
    char name2[] = "Sans";    // Its value can be set to "" to represent an empty string
    char name3[] = "Undyne";

    int int1 = 18; // this data type holds whole numbers
    int int2 = 30; // Its value can be set to 0 to represent zero
    int int3 = -25;

    float dec1 = 3.14; // this data type holds decimal numbers with single precision
    float dec2 = 2.71; // Its value can be set to 0.0f to represent zero
    float dec3 = 1.5;

    double precise1 = 3.141592653589793; // this data type holds decimal numbers with double the precision of a float
    double precise2 = 2.718281828459045;
    double precise3 = 1.618033988749895;

    bool in_college = false; // this data type holds a true/false value (boolean)
    bool employed = 1;       // booleans can also be represented as integers (0 for false, non-zero for true)
    bool in_school = true;

    printf("CHARACTERS: \n\n");
    printf("%c\n", symbol1); // printf means print the following
    printf("%c\n", symbol2); // \n mean newline, it moves the upcoming contents to a new line(basically the ENTER button)
    printf("%c\n", symbol3); // %c is used for printing characters

    printf("\n\nSTRINGS: \n\n");
    printf("%s\n", name1); // %s is used to print strings
    printf("%s\n", name2);
    printf("%s\n", name3);

    printf("\n\nINTEGERS: \n\n");
    printf("%3d\n", int1);   // %d is used to print integers, I can specify the space it should take by placing a number right before the 'd'
    printf("%-4d\n", int2);  // the - symbol forces the content to be to the left
    printf("%+05d\n", int3); // I can also add 0 to pad the spaces with 0, I can specify how many paddings of 0 I want by typing a number right after the zero, the + symbol tells the sign of the number

    printf("\n\nFLOATS: \n\n");
    printf("%.2f\n", dec1);  // %f stands for floating point numbers, I can insert .2 right before the 'f' to ensure only 2 places after the decimal are shown
    printf("%.4f\n", dec2);  
    printf("%7.1f\n", dec3); // Adding a number before the . tells how many spaces the float should take

    printf("\n\nDOUBLES: \n\n");
    printf("%.15lf\n", precise1); // %lf stands for long floating number
    printf("%.15lf\n", precise2); 
    printf("%.15lf\n", precise3);

    printf("\n\nBOOLEANS: \n\n");
    printf("%d\n", in_school); // booleans can only be printed as an integer (1 for true, 0 for false)
    printf("%d\n", employed);
    printf("%d\n", in_college);

    return 0;
}
