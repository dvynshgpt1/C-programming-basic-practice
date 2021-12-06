#include <stdio.h>
// //   recursion 
// // it is not working on number greater than 16

    int factorial(int number)
{    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1) );
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number \n", num);
    scanf("%d" , &num);
    printf("the factorial of number %d is  %d\n", num , factorial(num) );
    return 0;
}
