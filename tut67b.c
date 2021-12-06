#include <stdio.h>
int main ()
{   

//     //  for string 
// // this program using 'puts'  will put an string in txt file without removing existing information 

//      FILE *ptr = NULL;
//    ptr=fopen("aa67.txt" , "w");
//    char str[10];
//    fputs( "hello baccho hello karan" , ptr);
  


// for character
// this program using 'putc'  will put an character in txt file by removing existing information
// using 'puts' below 'putc' will continue from that charcter in txt file

 FILE *ptr = NULL;
   ptr=fopen("aa67.txt" , "w");
   fputc( 'h' , ptr);
   fputs("kunal",ptr );

    return 0 ; 
}