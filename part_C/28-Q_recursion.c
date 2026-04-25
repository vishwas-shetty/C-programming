// Program for sum of first n natural number ?
// NOTE :1+2+3+4+5+......+(n-1)+n = sum(n-1)+n

#include <stdio.h>

int sum(int n);

int main()
{
    printf("Sum is : %d",sum(27));

    return 0;
}

// recursive f(x)
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNum1 = sum(n - 1); // sum of 1 to n.  and for fact = fact(n-1)
    int sumN = sumNum1 + n;
    return sumN;
}