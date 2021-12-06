#include<stdio.h>

void printstr(char str[])
{
    int i=0;
    while ( str[i]!='\0')
    {
         printf("%c" , str[i]);   
         i++ ;
    }
    
}

int main(int argc, char const *argv[])
{
    char str [10]="divyanshu";
    gets(str);
    printstr(str);
  
    return 0;
}
