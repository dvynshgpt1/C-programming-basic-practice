#include <stdio.h>
// quiz on printing add and diiference using call by refernce

int add(float *x, float *y)
{
    return *x + *y;
}
int subtract(float *x, float *y)
{
    return *x - *y;
}
int main()
{
    float a, b, c, d;
    printf("add and difference \n Enter first number\n");
    scanf("%f",&a);
    
    printf("Enter second number\n");
    scanf("%f",&b);
    c = add(&a, &b);
    d = subtract(&a, &b);
    printf("the add is %f and the difference is %f\n", c, d);
    return 0;
}
