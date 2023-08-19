#include <stdio.h>

int main()
{

    char input;
    float amount,balance;

    printf("Enter the type of transaction : ");
    scanf("%c",&input);
    printf("Enter the current balance You have : ");
    scanf("%f",&balance);
    printf("Enter the withdraw or deposit amount : ");
    scanf("%f",&amount);

    switch(input) {
    case 'W':
    case 'w':
        printf("You selected withdraw money");
        balance=balance-amount;
        break;

    case 'D':
    case 'd':
        printf("You selected deposit money");
        balance= balance + amount;
        break;

    default:
        printf("Invalid Entry");
        break;

    }

    printf("Your New Balance is : %.2f ",balance);
}