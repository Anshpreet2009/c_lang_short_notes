#include <stdio.h>

//A struct is a custom container that multiple pieces of related information
//It is similar to Objects in other languages
//Basically, it is Object Oriented Programming for C language

struct Student{
    char name[100];
    int age;
    float gpa;
};

//Here, we are defining a custom datatype names Student
//And we are telling the program that every Student is supposed to have a:
//name, age, class, gpa

typedef struct{
    char name[50];
    int model;
    int price;
}Cars;

int main(){

    struct Student student1 = {"Spongebob", 16, 3.2};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.1f\n", student1.gpa);



    Cars car[] = {{"Mustang", 2023, 32000},
                  {"Lamborghini", 2021, 44000},
                  {"Ford", 2026, 125000}};

    int size = sizeof(car) / sizeof(car[0]);

    for (int i = 0; i < size; i++){
        printf("\nName: %s\nModel: %d\nPrice: $%d\n", car[i].name, car[i].model, car[i].price);
    }


    return 0;
}




