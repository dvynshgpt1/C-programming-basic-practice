#include <stdio.h>
int main()

{
    char a;
    char d;
    char c;
    printf("\n\n");
    printf("Enter name of special Birthday boy or girl  \n\n ", a);
    scanf("%c", &a);
    printf("\n\n");

    if (a == 'd') /*you have to be very careful in using == or = or "" or '' inside if statement */
    {

        printf("Happy Birthday  coder \n\n ******\n***\n\n  Divyanshu\n\n******\n  ***               May your code \n            always compile on your first try! \n\n");
    }
    else
    {
        printf("Oops , This is  not a  special name ! ** Enter special name ** \n\n");
    }
}
