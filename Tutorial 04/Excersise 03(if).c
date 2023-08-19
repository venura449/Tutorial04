#include <stdio.h>

int main() {
    char input;
    float num1, num2, output;

    // Prompt and input for the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Prompt and input for the operator (+, -, /, *)
    printf("Enter the operator (+, -, /, *): ");
    scanf(" %c", &input);  // Notice the space before %c to consume any newline character left in the input buffer.

    // Prompt and input for the second number
    printf("Enter the Second number: ");
    scanf("%f", &num2);

    // Perform calculations based on the chosen operator
    if (input == '+') {
        output = num1 + num2;
    } else if (input == '-') {
        output = num1 - num2;
    } else if (input == '/') {
        if (num2 == 0) {
            printf("\n\tDivision by zero is not possible\n");
            return 1;  // Exit with an error code.
        } else {
            output = num1 / num2;
        }
    } else if (input == '*') {
        output = num1 * num2;
    } else {
        printf("\n\tInvalid operator\n");
        return 1;  // Exit with an error code.
    }

    // Display the calculated result
    printf("Answer is: %.4f\n", output);

    return 0;
}
