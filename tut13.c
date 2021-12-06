#include <stdio.h>
int main(int argc, char const *argv[])
 {    
    //  do while loop
     int a , index=0 ;
     printf("enter a number " , a);
     scanf("%d" , &a);

     do
     {
         printf("%d\n" ,index );
       index =index + 1 ; 
     } while (index<a);
     
    return 0;
}
