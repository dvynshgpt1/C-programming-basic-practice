#include<stdio.h>
#include<string.h>.

int main()
{
    char s1[]="divyanshu";
    char s2[]="kunal";
    char s3[30];
     puts(strcat(s1,s2));
     puts(strrev(s1));
     puts(strrev(s2));
      printf("the length of string s1 is %d\n" , strlen(s1));
      printf("the length of string s2 is %d\n" , strlen(s2));
    strcpy(s3 ,strcat(s1,s2));
    puts(s3);
    printf("the strcmp for s1 s2 is %d\n" , strcmp(s1,s2));
    
     
       return 0;
}
