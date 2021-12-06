//  allow user to input numbers and return the sum of all those values and the largest number entered 
#include <stdio.h>
int main()
{
    int a, n;
    int sum = 0, largest_number = 0;

    printf("how many numbers sum you want\n ");
    scanf("%d", &n);
    printf("enter the numbers for addition\n ");

    for (int i = 1; i <= n; i++)
    {
        printf("enter number %d\n", i);
        scanf("%d", &a);
        sum = sum + a;
        if (a > largest_number)
        {
            largest_number = a;
        }
    }
    printf("the sum of all these numbers is  %d\n", sum);
    printf("the largest number is %d ", largest_number);
    return 0;
}
