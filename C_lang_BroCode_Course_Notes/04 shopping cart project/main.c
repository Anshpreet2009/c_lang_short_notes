#include <stdio.h>
#include <string.h>

int main()
{
    char item[50];
    float price = 0.0f;
    int quantity = 0;
    char currency[] = "$";
    float total = 0.0f;

    printf("What item would you like to buy?\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each item?\n");
    scanf("%f", &price);

    printf("How many of this item would you like to buy?\n");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You are buying %d %s(s)\n", quantity, item);
    printf("Your total is %s%.2f\n", currency, total);

    return 0;
}
