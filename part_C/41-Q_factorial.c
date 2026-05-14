// print the factorial of a number n?

#include <stdio.h>

int main()
{
    int n;
    printf("print number:");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("final factorial is %d", fact);
    return 0;
}

// if we input big  number(n) ,,,the ouput will be zero ,,cuz output is so big that 'int' datatype cannot be stored!