#include <stdio.h>
int main ()
{
    // int arr[]  = {10 ,20 ,30 ,40,50,60};
    // int *ptr1 = &arr;
    // int *ptr2 = &(arr)+5;
    // printf("%d ,%d, %d , %d ,%d ,%d", ptr1 , *ptr1 , ptr2  ,*ptr2 , arr ,arr[0]);
    // printf("\n %d ,%d", (ptr2-ptr1) , ( *ptr2-*ptr1));
    // return 0 ; 
    // output: 6422192 ,10 ,6422312 ,0 , 6422192 , 10
    //            30 ,-10

    //  int arr[]  = {10 ,20 ,30 ,40,50,60};
    // int *ptr1 = arr;
    // int *ptr2 = arr+5;
    // printf("%d ,%d, %d , %d ,%d ,%d", ptr1 , *ptr1 , ptr2  ,*ptr2 ,arr ,arr[0]);
    // printf("\n %d , %d", (ptr2-ptr1) , ( *ptr2-*ptr1));
    // return 0 ; 
    // output: 6422192 ,10 ,6422212 ,60 ,6422192 ,10
    //            5 , 50

    
    int arr[]  = {10 ,20 ,30 ,40,50,60};
    int *ptr1 = &arr;
    int *ptr3 = &(arr)+1;
    int *ptr2 = &(arr)+5;
    // printf("%d", ptr3 , *ptr3);
    printf("\n %d ,%d, %d , %d ,%d ,%d ,%d ,%d", ptr1 , *ptr1 , ptr3 , *ptr3 , ptr2  ,*ptr2 , arr ,arr[0]);
    printf("\n %d ,%d", (ptr2-ptr1) , ( *ptr2-*ptr1));
    return 0 ; 
    // output:  6422188 ,10, 6422212 , 6422308 ,6422308 ,0 ,6422188 ,10
    //         30 ,-10
}

