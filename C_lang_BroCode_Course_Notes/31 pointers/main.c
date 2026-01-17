#include <stdio.h>

void birthday(int* age);

int main(){
    //A pointer is a variable that stores the memory address of another variable
    //Its benefit is that it helps avoid wasting memory
    //By passing the address of a large data structure instead of copying the entire data

    int age = 25;
    int *pAge = &age;  //The & symbol gives the address of the variable

    //By using the * symbol, we are telling the computer that we are storing a pointer
    //The * can be put in the start of the variable name or in the end of datatype, For example:
    //int *pAge     OR     int* pAge     both work
    //The common convention for pointers is to add in *p to the start of the variable name

    printf("%p\n", &age);
    printf("%p\n", pAge);
    //These are the exact same
    
    birthday(pAge);
    
    printf("You are now %d years old", age);

    return 0;
}

void birthday(int* age){
    (*age)++;
}

