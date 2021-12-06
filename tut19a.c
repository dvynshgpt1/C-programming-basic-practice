 #include <stdio.h>
// //  with argument and with return value .
// // declaration , call , definition .

//  declatration
int sum(int a , int b);

//  call
 int main()
{
    int a, b, c;
    a = 11;
    b = 12;
    c = sum(a, b);
    printf("the sum is %d", c);
    return 0;
}
//  defintion
int sum(int a, int b)
{
    return a + b;
}
