// Print a table using function ?
// ARGUMENT AND PARAMETER

#include <stdio.h>
int sum(int a, int b);
void printTable(int n);

int main()
{
    int n;
    printf("Enter a number for table :");
    scanf("%d", &n);

    printTable(n); //ARGUMENT or actual parameter  
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}

void printTable(int n) // PARAMETER or formal parameter 
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i * n);
    }
}