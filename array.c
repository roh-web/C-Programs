#include <stdio.h>
#include <conio.h>
int main (void)
{
    int a[10],limit,i;
    printf ("Enter limit for array \n");
    scanf ("%d",&limit);
    printf ("Enter Numbers \n");
    for ( i = 0; i < limit; i++)
    {
        scanf ("%d",&a[i]);
    }
    printf ("Entered Values are :");
    for ( i = 0; i < limit; i++)
    {
            printf (" %d  ",a[i]);
    }
}