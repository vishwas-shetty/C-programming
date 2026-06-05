// Write a C program to simulate a simple calculator using switch-case. The program should perform addition, subtraction, multiplication, and division based on the operator entered by the user.

#include <stdio.h>

int main()
{
    char op;
    float a, b;

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op)
    {
    case '+':
        printf("Result = %f", a + b);
        break;

    case '-':
        printf("Result = %f", a - b);
        break;

    case '*':
        printf("Result = %f", a * b);
        break;

    case '/':
        if (b != 0)
            printf("Result = %f", a / b);
        else
            printf("Division by zero not allowed");
        break;

    default:
        printf("Invalid operator");
    }

    return 0;
}