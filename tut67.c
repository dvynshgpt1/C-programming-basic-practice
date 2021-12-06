 #include <stdio.h>
 int main ()
 {
 // // with 'r' 

//  FILE *ptr = NULL;
//    ptr=fopen("aa67.txt" , "r");
//    char str[10];
//    fgets(str, 50 ,ptr);
//    printf("%s" , str);
//     fclose("aa67.c.txt");

// // with 'r+'
// // using r+ ,  if there is aaaaaaaaa in txt file then putc and puts will take place in begginnig of aaaaaaaaa and rest left aaaaaa will come in the last.

// FILE *ptr = NULL;
//    ptr=fopen("aa67.txt" , "r+");
//    fputc('m' , ptr);
//    fputs("kunal boss" , ptr);

// // with 'w+'
// // using w+ ,   if there is aaaaaaaaa in txt file then putc and puts will take place by removing everything from txt file
FILE *ptr = NULL;
   ptr=fopen("aa67.txt" , "w+");
   fputc('m' , ptr);
   fputs("kunal boss" , ptr);
     
     return 0 ; 
 }