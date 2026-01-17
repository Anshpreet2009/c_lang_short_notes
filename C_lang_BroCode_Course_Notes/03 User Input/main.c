#include <stdio.h>
#include <string.h> //This library is important as it contains a lot of useful functions related to strings

int main()
{
    int age = 0; // It is important to give variables an initial value as they might assign values by themselves from previous data in memory
    float gpa = 0.0f; // Using null values is usually good practice
    char grade = '\0';
    char name[50] = "";

    printf("Enter your age: "); // scanf is used to scan for inputs, its usual format is:
    scanf("%d", &age); // scanf("the_datatype_we_want_to_get", address_of_where_to_assign_the_value);
                       // Putting an & before the variable gets the address of the variable

    printf("Enter your GPA: ");
    scanf("%f", &gpa); 

    printf("Enter your grade: ");
    scanf(" %c", &grade); // The space before %c is to consume any leftover whitespace characters

    getchar(); // This is used to clear the leftover whitespace character as we cant put the space before the format specifier like in scanf
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // File gets string (variable name, size of the variable, standard input) [fgets is used to allow spaces in the string]
                                      // Using sizeof() is smart as it automatically adjusts to the size of the variable
    name[strlen(name) - 1] = '\0';    // Removing the Blankspace added by fgets as it reads all inputs, including Enter key

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}
