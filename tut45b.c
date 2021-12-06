#include<stdio.h>
#include<stdlib.h>
// dont knowhow to use  'free' free(ptr)
int main ()
{
//     //  use of malloc
//     int *ptr;
//     int n;
//     printf("enter the order of array you want\n ");
//     scanf("%d" , &n);
     
// ptr = (int*) malloc(n*sizeof(int));
// for (int i = 0; i < n; i++)
// {
//      printf("enter the value no. %d of this array\n" , i);
//      scanf("%d" , &ptr[i]);
// }
// for ( int i = 0; i <n; i++)
// {
//     printf("the value  at no. %d is %d \n" , i , ptr[i]);
// }

   //  use of calloc
    int *ptr;
    int n;
    printf("enter the order of array you want\n ");
    scanf("%d" , &n);
     
ptr = (int*) calloc(n , sizeof(int));
for (int i = 0; i < n; i++)
{
     printf("enter the value no. %d of this array\n" , i);
     scanf("%d" , &ptr[i]);
}
for ( int i = 0; i <n; i++)
{
    printf("the value  at no. %d is %d \n" , i , ptr[i]);
     
}
 
// use of realloc
    

    printf("enter the size of new order  of array you want\n ");
    scanf("%d" , &n);
     
ptr = (int*) realloc(ptr , n*sizeof(int));
for (int i = 0; i < n; i++)
{
     printf("enter the new value no. %d of this array\n" , i);
     scanf("%d" , &ptr[i]);
}
for ( int i = 0; i <n; i++)
{
    printf("the value  at no. %d is %d \n" , i , ptr[i]);
} 
 
printf("how are you");

    return 0;
}


