#include <stdio.h>
#include <string.h>

int main()
{
    char name[64] = "";  // The [] right after the variable name tell how many bytes it shiuld store
    char age[64] = "";
    char feeling[64] = "";
    char hobby[64] = "";
    char food[64] = "";

    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("What is your age?: ");
    fgets(age, sizeof(age), stdin);
    age[strlen(age) - 1] = '\0';

    printf("How are you feeling today?: ");
    fgets(feeling, sizeof(feeling), stdin);
    feeling[strlen(feeling) - 1] = '\0';

    printf("What is your favorite hobby?: ");
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strlen(hobby) - 1] = '\0';

    printf("What is your favorite food?: ");
    fgets(food, sizeof(food), stdin);
    food[strlen(food) - 1] = '\0';

    printf("So, in summary....\n");

    printf("Your name is %s.\n", name);
    printf("You are %s years old.\n", age);
    printf("You are feeling %s today.\n", feeling);
    printf("Your favorite hobby is %s.\n", hobby);
    printf("Your favorite food is %s.\n", food);

    return 0;
}
