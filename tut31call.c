#include<stdio.h>
// call by value

 int add(int x, int y)
 {
     return x+y;
     }

int main( )
{
    
    int a , b , c ;
    printf("Sum function\n enter First number.\n");
    scanf("%d" ,&a);
     printf("enter second number.\n");
    scanf("%d" ,&b);
    c = add(a,b);
   printf("the sum is %d\n" , c);
    return 0;
}
