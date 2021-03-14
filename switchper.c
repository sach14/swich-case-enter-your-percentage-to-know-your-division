#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    while (1)
    {
        int choice, per;
        printf("\n1. Percentage above 90 ");
        printf("\n2. Percentage above 80 ");
        printf("\n3. Percentage above 70 ");
        printf("\n4. Percentage above 60 ");
        printf("\n5. Exit ");
        printf("\nSelect your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter your percentage:");
            scanf("%d", &per);
            if (per >= 90)
                printf("\nFirst division\n");
            else
                printf("\nInvalid percentage\n");
            break;
        case 2:
            printf("\nEnter your percentage:");
            scanf("%d", &per);
            if (per >= 80)
                printf("\nSecond division\n");
            else
                printf("\nInvalid percentage\n");
            break;
        case 3:
            printf("\nEnter your percentage:");
            scanf("%d", &per);
            if (per >= 70)
                printf("\nThird division\n");
            else
                printf("\nInvalid percentage\n");
            break;
        case 4:
            printf("\nEnter your percentage:");
            scanf("%d", &per);
            if (per >= 60)
                printf("\nFourth division\n");
            else if (per < 33)
            {
                printf("\nFail\n");
            }
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nInvalid choice\n");
            break;
        }
    }
    return 0;
}