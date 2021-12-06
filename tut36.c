#include <stdio.h>
// print given arr in reverse order
// the video solution is in tut40 which i didn't create
// not understood
void arrRev(int swap[])

{
    int n;
    for (
        int i = 0; i < 9/2 ; i++)
    {
        n = swap[i];
        swap[i] = swap[8 - i];
        swap[8 - i] = n;
    }
}
int main()
{
    int swap[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //  before reversing
    for (int i = 0; i < 9; i++)
    {
        printf("the index value at position %d is %d\n", i, swap[i]);
    }
    printf("\n");
    //  after reversing
    arrRev(swap);
    for (int i = 0; i < 9; i++)
    {
        printf("the index value at position %d is %d\n", i, swap[i]);
    }

    return 0;
}
