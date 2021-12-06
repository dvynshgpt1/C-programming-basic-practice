#include<stdio.h>
#include<stdlib.h>
int main ()
{
    //  use of malloc
    int *ptr;
    int n;
    printf("enter the order of array you want\n ");
    scanf("%d" , &n);
     
ptr = (int*) malloc(n*sizeof(int));
// for (int i = 0; i < n; i++)
// {
//      printf("enter the value no. %d of this array\n" , i);
//      scanf("%d" , &ptr[i]);
// }
for ( int i = 0; i <n; i++)
{
    printf("the value  at no. %d is %d \n" , i , ptr[i]);
}

//    //  use of calloc
//     int *ptr;
//     int n;
//     printf("enter the order of array you want\n ");
//     scanf("%d" , &n);
     
// ptr = (int*) calloc(n , sizeof(int));
// // for (int i = 0; i < n; i++)
// // {
// //      printf("enter the value no. %d of this array\n" , i);
// //      scanf("%d" , &ptr[i]);
// // }
// for ( int i = 0; i <n; i++)
// {
//     printf("the value  at no. %d is %d \n" , i , ptr[i]);
// }
    return 0;
}


