
#include<stdio.h>
 /* print a multiplication of a number entered by the user in pretty form 
 
 example:
 input :
 enter  the number you want multiplication table of:
 6
output:
table of 6:
6*1=6;
6*2=12;

6*3=18;
6*4=24;
6*5=30;
6*6=36;
6*7=42;
6*8=48;
6*9=54;
6*10=60;


  */
 /* code */
int main(int argc, char const *argv[])
{ int a , b, c, i ;

printf("Enter the Number you want Multipication of ");
scanf("%d" , &a);
printf("the table for %d is :\n",a);
printf("%d*1=%d\n",a,a*1);
printf("%d*2=%d\n",a,a*2);
printf("%d*3=%d\n",a,a*3);
printf("%d*4=%d\n",a,a*4);
printf("%d*5=%d\n",a,a*5);
printf("%d*6=%d\n",a,a*6);
printf("%d*7=%d\n",a,a*7);
printf("%d*8=%d\n",a,a*8);

printf("%d*9=%d\n",a,a*9);
printf("%d*10=%d\n",a,a*10);


   

    return 0;
}
