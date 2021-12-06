#include <stdio.h>
// //  with arguement but without return value 

// declaration
void printstar(int n)
{
    for (
       int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
// call
int main()
{ 
    printstar(3);

    return 0;
}
