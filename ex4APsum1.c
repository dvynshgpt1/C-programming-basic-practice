#include <stdio.h>
void main ()
{int a , d , n , lt;
int sum=0;
 printf(" enter first term\n");   
 scanf("%d" ,&a);
 printf(" enter common difference\n");   
 scanf("%d" ,&d);
 printf(" enter no of  terms\n");   
 scanf("%d" ,&n);
 sum=n*(2*a+(n-1)*d)/2;
 lt=a+(n-1)*d;
 printf("the last term  of this AP is %d\n and the sum of this AP is %d " , lt , sum);
 
}