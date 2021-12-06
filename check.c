#include <stdio.h>
#include <stdlib.h>
int main ()
{  
    //  use of malloc
    int *ptr;
     
ptr = (int*) calloc(5 , sizeof(int));
for (int i = 0; i < 3; i++)
{
     printf("enter the value no. %d of this array\n" , i);
     scanf("%d" , &ptr[i]);
}
for ( int i = 0; i <6; i++)
{
    printf("the value  at no. %d is %d \n" , i , ptr[i]);
}


    return 0 ; 
}