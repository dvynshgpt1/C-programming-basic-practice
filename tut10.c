#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int marks;          
    printf("enter your marks " , marks);
    scanf("%d" , &marks);
    if (   marks>=80)
    {
        /* code */
        printf("congrats ! you secured grade A with marks %d " , marks);
    }
    else if (  marks>=50 )
    {
        /* code */
        printf("you are passed with %d marks " , marks);
    }
    else
    { /* code */
        printf("try next time  your marks are %d " , marks);
    }
     return 0;
}
