#include <stdio.h>
#include <math.h>
// error
void main()
{
  int a, d, n, lt;
  int sum = 0;
  printf("enter first term of A.P\n");
  scanf("%d", &a);
  printf("enter common difference of A.P\n");
  scanf("%d", &d);
  printf("enter number of terms of A.P\n");
  scanf("%d", &n);
  sum = (n * (2 * a + (n - 1) * d)) / 2;
  lt = a + (n - 1) * d;

  for (int i = a; i <= lt; i = i + d)
  {
    if (i != lt)
      printf("%d", i);

    else
     printf("%d =%d\n", i, sum);
  }
}