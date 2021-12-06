#include <stdio.h>
#include <stdlib.h>
int main ()
{   char paas[10];
     printf("enter password for access\n");
     scanf("%s" ,&paas);
    if ( strcmpi (paas , "dvynshgpt")==0 )
{
      FILE *ptr = NULL;
   ptr=fopen("aa67.txt" , "r");
   char str[10];
   fgets(str, 50 ,ptr);
   printf("%s" , str);
    fclose("aa67.c.txt");
}
else
{
     printf("wrong paasword . try again \n");
}

 
    
    return 0 ; 
}