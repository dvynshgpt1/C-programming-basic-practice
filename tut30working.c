#include <stdio.h>
// exercise 3 on print star pattern . i did it without usin function. using switch.
int main(int argc, char const *argv[])
{

  int rows, i, j, a;

  printf("which star pattern do you want. \n Enter 0 for triangular pattern \n   Enter 1 for reverese triangular pattern\n\n");
  scanf("%d", &a);
  switch (a )
  {
  case 0:
    printf("enter no. of rows of star pattern\n");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
      for (j = 0; j <= i; j++)
      {
        printf("*");
      }
      printf("\n");
    }
      break;
    case 1:
      printf(" enter no.  of rows of star pattern\n");
      scanf("%d", &rows);

      for (i = 0; i < rows; i++)
      {
        for (j = 0; j <= rows-i-1; j++)
        {
          printf("*");
        }
        printf("\n");
        }
          break;
      default:
        break;
      
  
}
    return 0;
  }
