// exercise on take names from user and then join them by name1 is friend of name2
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name1[10];
    char name2[10];
    printf("Enter first name " , name1);
    scanf("%s" , &name1);
    printf("Enter second name " , name2);
    scanf("%s" , &name2);
    printf("%s is friend of %s\n" , name1 , name2);

    return 0;
}
