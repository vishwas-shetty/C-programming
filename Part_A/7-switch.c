#include <stdio.h>

int main()
{
        int day; // 1-mon; 2-tues; 3-wed; so on till 7-sun;
        printf("enter day(1-7):");
        scanf("%d", &day);

        switch (day)
        {
        case 1:
                printf("monday");
                break;
        case 2:
                printf("tuesday \n");
                break;
        case 3:
                printf("wednesday \n");
                break;
        case 4:
                printf("thursday \n");
                break;
        case 5:
                printf("friday \n");
                break;
        case 6:
                printf("saturday \n");
                break; //break will stop switch in compling once the statement is true.
        case 7:
                printf("sunday \n");
        default:
                printf("not a valid day! \n");
        }

        return 0;
}

// cases can be in any order !
