#include<stdio.h>
int func1(int array[])
{
    for (
        int i = 0; i <4; i++)
    {
       printf("the value at position  %d is %d\n ", i , array[i]);
    }
    // array[0]=333;
    printf("\n\n");
     
}
int func2(int *array[])
{
    for (int i = 0; i < 4; i++)
    {
         printf("the value at position  %d is %d\n ", i , *(array+i));
    }
    
}

int main()
{
    int arr[]={444,2,3,4};
    printf("the value at position 0 is %d\n",arr[0]);
   func1(arr);
    printf("the value at position 0 is %d\n",arr[0]);   
    func2(arr);
    return 0;
}
