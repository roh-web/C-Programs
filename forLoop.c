#include <stdio.h>
#include <conio.h>
int main (void)
{
    int i,limit=100;
    for ( i = 0;i <= limit; i++)
    {
        if ( i < limit) {
        printf ("%d , ",i);
            }else {
        printf ( "%d", i);
    }
}
    getch();
    return 0;
}