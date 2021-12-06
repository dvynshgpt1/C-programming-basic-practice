#include <stdio.h>
void pattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversepattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, a;
    printf("which star pattern do you want. \n Enter 0 for triangular pattern \n   Enter 1 for reverese triangular pattern\n\n");
    scanf("%d", &a);
    printf("enter no. of rows of star pattern\n");
    scanf("%d", &rows);
    // in this line on putting this " pattern(rows); " check change in output

    switch (a)
    {
    case 0:
        pattern(rows);
      break;
    case 1:
        reversepattern(rows);
      break;
    default:
      break;
    }

    return 0;
}
