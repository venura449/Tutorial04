#include <stdio.h>

// Function prototype to get a number from the user
int getnum(int number);

// Function prototype to process the number
int process(int number);

int main() {
    int number;

    // Call the getnum function to get a number from the user
    getnum(number);

    // Call the process function to process the number and print the result
    printf("Your Number is %d", process(number));

    return 0;
}

// Function definition to get a number from the user
int getnum(int number) {
    printf("Enter Your Number: ");
    scanf("%d", &number);
    return number;
}

// Function definition to process the number
int process(int number) {
    if (number < 0) {
        number = number * (-1); // Convert negative number to positive
    }
    // Return the processed number
    return number;
}
