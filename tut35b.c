// exercise on take names from user and then join them by name1 is friend of name2
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name1[10];
    char name2[10];
    char name3[10];
    char name4[10];
    printf("Enter first name " , name1);
    scanf("%s" , &name1);
    printf("Enter second name " , name2);
    scanf("%s" , &name2);
    strcpy( name3 ,  (name2));
    strcpy( name4 , (name1));
     printf("%s is friend of %s\n" , name3, name4 );
    
    
    
    return 0;
}
