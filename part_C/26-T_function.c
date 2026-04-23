// Write a function code that can give output for sum of any two number ?

#include <stdio.h>

int sum(int a, int b); // f(x) Declaration !

int main()
{
    int a, b;
    printf("Enter first number :");
    scanf("%d", &a); // f(x) defination
    printf("Enter second number :");
    scanf("%d", &b);

    int s = sum(a, b); /* we have just defined a variable 's' using power house and a and b
                              are assined to x and y in f(x) call.*/
    printf("Sum is : %d \n", s);

    return 0;
}

int sum(int x, int y)
{ // f(x) call
    return x + y;
}
