//  why we are here using while .
// we are using while(condition) loop by giving condition 1 that means it will run forever.

#include <stdio.h>
int main()
{
  char input;
  float milestokm = 1.6 ;
  float foottoinches = 12 ;
  float inchestocms = 2.54 ;
  float kgtopound = 2.202 ;
  float first , second ;
  while (1)
  {
    printf("Enter System number or Enter q to quit \n 1. Miles to km \n 2. foot to inches \n 3. inches to cm\n 4. kg to pound \n");
    scanf("%c", &input);

    switch (input)
    {
    case 'q':
      printf("progrramm quitted successfully ");
      goto end ;
      break;

    case '1':
      printf("enter first system value \n ", first);
      scanf("%f", &first);
      second = first *   milestokm ;
      printf("%f miles is equal to %f km \n\n\n", first, second);
      break;

    case '2':
      printf("enter first system value ", first);
      scanf("%f", &first);
      second = first * foottoinches;
      printf("%f   foot  is equal to %f  inches \n\n\n", first, second);
      break;

    case '3':
      printf("enter first system value ", first); 
      scanf("%f", &first);
      second = first * inchestocms;
      printf("%f inches  is equal to %f cms \n\n\n", first, second);
      break;

    case '4':
    printf("enter first system value \n\n\n" , first);
    scanf("%f" , &first);
    second=first* kgtopound;
    printf("%f kg are equal to %f  pound \n\n\n " , first , second);
    default:
      break;
    }
  }

end:
  return 0;
}
