// for loop - - this will allow user to enter age 10 times . what to do if i want this to infinite time
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age, i;
    for (i = 0; i < 10; i++)
    {

        printf("enter your age\n");
        scanf("%d", &age);

        if (age > 10)
        {
            printf("you are a teen\n");
        }
        else
        {

            printf("under 10\n");
        }
    }
    return 0;
}
