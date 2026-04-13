// what if the else statement in if-else condition is false ,,,then we should use else if
// basically if we have more than 2 or more ,, we should use else if 


#include <stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("adult \n");
    }
    else if (age > 13 && age < 18)   // checking method
    {
        printf("teenager \n");
    }
    else
    {
        printf("child");
    }
    return 0;
}
