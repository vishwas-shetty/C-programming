// Print the sum of First n Natural number.(n=4)?
// also print them in reverse

#include <stdio.h>

int main()
{
    int n;
    printf("enter number :");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; // (or) sum += i
    }
    printf("sum is %d \n", sum);

    for(int i=n; i>=1;i--){
        printf("%d \n", i);
    }

    return 0;
}

// In Forloop, the value we declare for i stands only within the box ({})!