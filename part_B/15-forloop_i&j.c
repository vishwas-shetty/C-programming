// Forloop for mutiple variable (intialization)
// Print the sum of First n Natural number.(n=4)?
// also print them in reverse

#include <stdio.h>

int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i; // (or) sum += i
        printf("%d \n", j);
    }

    printf("sum is %d \n", sum);

    return 0;
}

