#include <stdio.h>
#include <string.h>
// exercise 3 on print star pattern . this is giving error with if else
void main()
{

    int rows, i, j, a;

    printf("which star pattern do you want. \n Enter 0 for triangular pattern \n   Enter 1 for reverese triangular pattern\n\n");
    scanf("%d", &a);

    if (a = '0')
    {
        printf("enter no. of rows of star pattern\n");
        scanf("%d", &rows);
    
        for (i = 1; i < rows; i++)
        {
            for (j = 1; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
     else (a='1')
        {
            printf(" enter no.  of rows of star pattern\n");
            scanf("%d", &rows);
        
            for (i = 1; i >= rows; i--)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
            }
        }
}
                printf("\n");
}