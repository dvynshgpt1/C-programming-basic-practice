//exercise 3.. make fibonacci for n= 42 . by both iterative and recursion method and then  observe time complexicity
//   conclusion :: recursive approach for fibonacci  series  takes more time  than iterative approach for big number 
//  but in case of finding factorial  , it is useful
// iterative approach i haven't understood 

#include <stdio.h>
int recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return recursive(n - 1) + recursive(n - 2);
    }
    return 0;
}

int iterative(int n)
{   
    int a=0 ; 
    int b=1 ;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
     return  a;
}
int main()
{
    int number;
    printf("enter the index to get fibonacci series\n ");
    scanf("%d", &number);
    printf("the value of fibonacci number at position no %d using  iterative approach is %d\n", number, iterative(number));
    printf("the value of fibonacci number at position no %d using  recursive approach is %d\n", number, recursive(number));

    return 0;
}
