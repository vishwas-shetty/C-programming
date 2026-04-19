#include <stdio.h>

int main()
{
    // int i = 1;
    // do
    // {
    //     printf("%d \n", i);
    //     i++;
    // } while (i <= 5);

    // Q) Print the sum of first n natural number ?
    int n;
    printf("ENter a number :");
    scanf("%d ", &n);

    int sum = 0;
    for(int i=1;i<=n; i++){
        sum = sum + i;  // or sum += i
    }

    printf("sum is %d \n", sum );  

    return 0;
}