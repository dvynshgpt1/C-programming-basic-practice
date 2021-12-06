#include <stdio.h>
#include <string.h>
// // array

int main()
{
   int i;
   int marks[] ={10, 20 ,30 ,40};
    // marks[0] = 10;
    // marks[1] = 20;
    // marks[2] = 30;
    // marks[3] = 40;
    // printf("marks of  roll no. 0 is  %d\n",  marks[0]);
    // printf("marks of  roll no. 1 is  %d\n",  marks[1]);
    // printf("marks of  roll no. 2 is  %d\n",  marks[2]);
    // printf("marks of  roll no. 3 is  %d\n",  marks[3]);
   for ( int i = 0; i < 4; i++)
    {
        printf("marks of  roll no. %d is  %d\n", i ,  marks[i]);
    }
    
  
    return 0;
}
