#include <stdio.h>
// // union in C
// we can access only one union memeber for which value is assigned at last.we can't access other member values
// if access then it will show some garbage value.
 union  student
{int marks ;
int id ;
char favletter;
 
};

int main()
{
    union  student kunal , ravi , shubham;
     kunal.id = 1;
     kunal.favletter = 'a';
    kunal.marks = 400;
     ravi.marks = 400;
     shubham.marks = 400;
     shubham.id = 2;
     ravi.id = 3;
     shubham.favletter = 'b';
     ravi.favletter = 'c';
    printf(" kunal got %d marks\n" ,kunal.marks );
    printf(" kunal  id is %d  \n" ,kunal.id );
    printf(" kunal favletter is % c\n" ,kunal.favletter);
    return 0;
}
