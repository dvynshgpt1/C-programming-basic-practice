#include<stdio.h>
int main(int argc, char const *argv[])
{ int marks [3][3] ={{10 , 20 , 50} ,{30 , 40 , 70} ,{ 13 , 23 , 33}};
  for (
      int i = 0; i < 3; i++)
  {
      printf("\n");
       for (
           int j = 0; j < 3; j++)
       {
             printf(" %d" , marks[i][j]);
       }
        
  }
  

     
    return 0;
}
