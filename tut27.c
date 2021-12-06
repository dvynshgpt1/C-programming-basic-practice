#include<stdio.h>
// array and pointer arithmatic
int main(int argc, char const *argv[])
{
     int arr[]={1,2,3,4,5,6,7,8,9,};

     printf("the value at address of first element of array  is %d\n" ,arr[0]);
     printf("the value at address of first element of array  is %d\n" ,*arr );
     printf("the address of first element of array  is %d\n" ,&arr );
     printf("the address of first element of array  is %d\n" ,arr );
     printf("the value at address of  second element of array  is %d\n" ,arr[1]);
     printf("the  address of  second element of array  is %d\n" ,&arr[1]);
     printf("the address of  second element of array  is %d\n" ,&arr[1]);
     printf("the value at  address of second element of array  is %d\n" , arr[1]);
    return 0;
}
