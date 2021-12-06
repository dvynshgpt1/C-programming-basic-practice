#include <stdio.h>
// // 2 D array
 
int main()
{   
    int marks[2][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}};
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            // printf("the value of %d %d element of array is %d\n ", i, j, marks[i][j]);
            printf("  %d ",  marks[i][j]);
            
        }
    }
        return 0;
    }
