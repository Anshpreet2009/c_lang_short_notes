#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// prototyping functions is recommended to keep things organised
void hello(char name[], int age); // Here, I am declaring a function and its
                                  // parameters before declaring it
bool ageCheck(int age);

int main() {

  int age = 0;
  char name[64] = "";

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("Enter your age: ");
  scanf("%d", &age);

  hello(name, age);

  if (ageCheck(age)) {
    printf("You are eligible to work in Krusty Krabs");
  } else {
    printf("You are too young to work in Krusty Krabs");
  }

  return 0;
}

void hello(char name[], int age) { // Here, the function is called. Also, I can
                                   // declare it even after the main function
  printf("Hello, %s\n", name);
  printf("You are %d years old\n", age);
}

bool ageCheck(int age) {
  if (age >= 18) {
    return true;
  } else {
    return false;
  }
}
