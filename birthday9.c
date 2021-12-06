#include <stdio.h>
#include<string.h>
int main()   
     
{   
    
    char array[10]; 
    printf("Enter special name:");
    gets(array);
    if(strcmpi(array ,"harry")==0)
    {

        printf("You are special\n\n");
    }
    else
    {
        printf("this is not a special name \n\n");
    } 
}
