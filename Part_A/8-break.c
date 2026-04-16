#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)                                       
        {
            break; // exits from the loop!
        }
        printf("%d \n", i);
    }
    
    printf("END");
    return 0;
}