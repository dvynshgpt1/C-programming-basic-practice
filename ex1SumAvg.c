#include <stdio.h>
// allow user to enter 3 number then provide sum & average  of entered no. 
void main()
{
    int n, sum=0;
    float avg;
    printf("enter 3 numbers\n");
    for (int i = 1; i < 4; i++)
    {
        printf("number %d : \n", i);
        scanf("%d", &n);
        sum += n; 
        // or the above line can be written as 
        // sum = sum+n;
    }
    avg = sum / 3.0;
    printf("the sum of 3 no.  is %d\n the avg is %f\n", sum, avg);
}