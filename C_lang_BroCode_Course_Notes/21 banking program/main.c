#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    int choice = 0;
    float balance = 0.0f;



    do{ printf("\nSelect an option:\n\n");
        printf("(1)Check balance\n");
        printf("(2)Deposit Money\n");
        printf("(3)Withdraw Money\n");
        printf("(4)Exit Bank\n");

        scanf("%d", &choice);

        switch (choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\n-----------------------------\n");
                printf("Thank you for using the bank!");
                printf("\n-----------------------------\n");
                break;
            default:
                printf("\n-------------------------------------------\n");
                printf("Invalid Choice! Choose a number between 1-4");
                printf("\n-------------------------------------------\n");
                break;
        }

    }while(choice != 4);



    return 0;
}

void checkBalance(float balance){
    printf("\n----------------------\n");
    printf("Your balance is $%.2f", balance);
    printf("\n----------------------\n");
}

float deposit(){
    float amount = 0.0f;

    printf("\nEnter amount to deposit: $");
    scanf("%f", &amount);

    if (amount < 0){
        printf("\n--------------\n");
        printf("Invalid amount");
        printf("\n--------------\n");
        return 0.0f;
    }
    else{
        printf("\n-----------------------------\n");
        printf("Successfully deposited $%.2f", amount);
        printf("\n-----------------------------\n");
        return amount;
    }
}

float withdraw(float balance){
    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    scanf("%f", &amount);

    if (amount < 0){
        printf("\n-------------\n");
        printf("Invalid amount");
        printf("\n-------------\n");
        return 0.0f;
    }
    else if (amount > balance){
        printf("\n-----------------------\n");
        printf("Balance is insufficient");
        printf("\n-----------------------\n");
        return 0.0f;
    }
    else{
        printf("\n--------------------------\n");
        printf("Successfully withdrew $%.2f", amount);
        printf("\n--------------------------\n");
        return amount;
    }
}
