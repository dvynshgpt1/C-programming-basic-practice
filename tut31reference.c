#include <stdio.h>
// call by reference
// swapping the given nuber 

void swap(int *x, int *y)

{
    int n;
    n = *x;
   *x = *y;
   *y =  n;
    
}

int main()
{
    int a, b;
    printf(" swapping value \n\n enter First number.\n");
    scanf("%d",&a);
     printf("  enter  Second number.\n");
     scanf("%d",&b);
    swap(&a, &b);
    printf(" value swapped \n %d ,%d\n", a, b);
    
    return 0;
}
