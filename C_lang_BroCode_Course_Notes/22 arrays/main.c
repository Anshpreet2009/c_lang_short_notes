#include <stdio.h>

int main(){
    //An array is a fixed-size collection of elements of the SAME data type
    //It is similar to a variable, but it can hold more than 1 value
    //You can declare variables using this format:
    //data_type   name_of_array[]  =  {a, b, c, d, e.......};

    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    //You can get an element of an array by typing:   name_of_array[index_of_elements]
    //The index of elements of arrays start from 0

    printf("%d\n", numbers[0]);

    //We can't change the whole array, only the elements

    grades[4] = 'E';

    printf("%c\n", grades[4]);

    //Printing the whole array gives us a random garbage number
    //Make sure to only get a specific index

    printf("%d\n", numbers);

    return 0;
}



