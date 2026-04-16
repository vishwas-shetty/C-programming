#include <stdio.h>

int main()
{
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("adult \n");
        printf("they can vote \n");
        printf("they are V \n");
    }
    else
    {
        printf("not adult \n"); // what if this else statement is also false ,,,then we should use else-if 
    }

    printf("thank you \n"); // this will be excicuted anyway cuz it is not in if-else conditionl block 
                            // that is the reason why flower bracket are opened and closed for conditional statements.

    return 0;
}

// if u want you can remove else statment ,,if you checking only for wheatehr is adult or not
// if u want u can remove flower bracklet ,,but if else statement should be only one statement