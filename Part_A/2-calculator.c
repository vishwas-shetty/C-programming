#include <stdio.h>

int main()
{
    int a, b, result;
    int choice;

    printf("Enter the operations:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Remainder\n6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter you two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4:
        result = a / b;
        break;
    case 5:
        result = a % b;
        break;
    case 6:
        printf("Exiting\n");
        break;
    default:
        printf("Please enter operation between 1 to 6\n");
    }
    printf("The result of the operation on two numbers is %d\n", result);
    return 0;
}
