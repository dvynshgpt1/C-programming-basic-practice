#include <stdio.h>
void main ()
{  
    int n , i , table ;
    printf("enter a number\n");
    scanf("%d" , &n);
    printf("the table of %d is \n"  ,n); 
    for (i = 1; i <= 10; i++)
     {  
         table= n*i;
        printf("  %d * %d = %d \n"  , n , i , table );
    }
}
