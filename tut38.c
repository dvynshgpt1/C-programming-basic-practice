#include<stdio.h>
#include<string.h>
// i still have doubt on working of typedef 
// this programm is not working
int main()
{
  int* a , b;
  typedef int* intPointer;
  intPointer a, b;
 int c =99;
  a=&c;
  b=&c;

 printf("%d ,  %d" ,  c ,c );

   return 0;
}
