#include<stdio.h>
// pointers
// * is used to provide value in given address
// & gives the address of variable 

int main()

{  
    int a=76;
    int *ptra=&a;
    printf(" addresss of a in percentd d form \n %d\n" ,  a);
    printf("addresss of ptra in percentd x form   \n %x\n" , ptra);
    printf(" the value in addresss of ptra in percentd x form   \n %x\n" , *ptra);

    return 0;
}
