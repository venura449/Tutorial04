#include <stdio.h>

int Add(int num1, int num2);
int Substract(int num1, int num2);
int Divide(int num1, int num2);
int Multiply(int num1, int num2);

int main() {
    int num1, num2, outValue;
    char Operator;

    printf("Enter Your First Number: ");
    scanf("%d", &num1);

    // Consume any remaining whitespace characters including newline
    getchar();

    printf("Enter +, -, /, * accordingly: ");
    scanf("%c", &Operator);

    printf("Enter Your second Number: ");
    scanf("%d", &num2);

    switch (Operator) {
        case '+':
            outValue = Add(num1, num2);
            break;

        case '-':
            outValue = Substract(num1, num2);
            break;
        case '/':
            outValue = Divide(num1,num2);
            break;
        case '*':
            outValue = multiply(num1,num2);
            break;

        // Handle other operators here
        
        default:
            printf("Invalid operator.\n");
            return 1; // Return an error code
    }

    printf("Result: %d\n", outValue);
    return 0;
}

int Add(int num1, int num2) {
    return num1 + num2;
}

int Substract(int num1, int num2) {
    return num1 - num2;
}

int Divide(int num1, int num2) {
    return num1 / num2;
}

int multiply (int num1, int num2) {
    return num1*num2;
}
// Define Multiply and Divide functions similarly
