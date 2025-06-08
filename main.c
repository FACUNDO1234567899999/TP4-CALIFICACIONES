/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ float cal;
    printf("ingrese la nota:");
    scanf("%f",&cal);
    if( cal>=90)
    printf("Su calificación es A\n ");
    if( 80<=cal && cal<90)
    printf("Su calificación es B\n ");
    if( 70<=cal && cal<80)
    printf("Su calificación es C\n ");
    if( 60<=cal && cal<70)
    printf("Su calificación es D\n ");
    if( cal<=60)
    printf("Su calificación es F\n ");
    
    return 0;
}