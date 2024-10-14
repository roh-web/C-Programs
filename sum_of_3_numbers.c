#include <stdio.h>
#include <conio.h>
int main (void) 
{
    int a,b,c,sum=0;
    printf ("Enter 3 numbers\n");
    scanf ("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf ("Sum is %d",sum);
    getch();
    return 0;
}
 