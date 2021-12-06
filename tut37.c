#include <stdio.h>
struct  student
{int marks ;
int id ;
char favletter;
 
};

int main()
{
    struct student kunal , ravi , shubham;
    kunal.marks = 400;
     ravi.marks = 400;
     shubham.marks = 400;
     shubham.id = 2;
     kunal.id = 1;
     ravi.id = 3;
     kunal.favletter = 'a';
     shubham.favletter = 'b';
     ravi.favletter = 'c';
    printf(" kunal got %d marks\n" ,kunal.marks );
    return 0;
}
