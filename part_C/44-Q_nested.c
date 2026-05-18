// Write a program to give grades to a stuent ?
/*marks<30 is C
 30<=marks<70 is B
 70<=marks<90 is A
 90<=marks<=100 is A+ */

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks(0-100) :");
    scanf("%d", &marks);

    if (marks < 30)
    {
        printf("C grade \n");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("B grade \n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("A grade \n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("A++ grade \n");
    }
    else
    {
        printf("invaild marks and please enter your marks below 100 ..thank you \n");
    }
    return 0;
}

// Good V ,,, you only rebuilted the last condition ,,,so good going !!!!