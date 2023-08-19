#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter a Number: ");

    // Read the number from the user's input
    scanf("%d", &number);

    // Check if the entered number is negative
    if (number < 0) {
        // If negative, convert it to a positive number
        number = number * (-1);
    }

    // Print the final value of the number
    printf("Your Number is %d", number);

    return 0;
}
