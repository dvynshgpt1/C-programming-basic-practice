#include <stdio.h>
//    I didn't write code for Switch

int main(int argc, char const *argv[])
{
  
    int a;
    printf(" Check your eligibility for NDA exam   (Enter your DOB in the format YearMonthDate  )\n ", a);
    scanf("%d", &a);

    if (a > 20060101)
    {
        /* code */
        printf("you are not eligible for NDA (2) 2021 , Or reCheck your DOB./n ", a);
    }
    else if (a > 20030101)
    {
        /* code */
        printf("congrats ! You are eligibe for NDA (2) 2021 \n", a);
    }
    else
    { /* code */
        printf(" You are not eligible for NDA (2) 2021  , Or reCheck your DOB.\n", a);
    }

    return 0;
}