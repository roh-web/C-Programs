#include <stdio.h>
#include <conio.h>
int main (void) 
{
    int limit,i,search,a[10],f=0;
    printf ("Enter limit\n");
    scanf ("%d",&limit);
    printf ("Enter values\n");
    for ( i = 0; i < limit; i++)
    {
        scanf ("%d",&a[i]);
    }
    printf("Enter Search Key\n");
    scanf("%d",&search);
    for (  i = 0; i < limit; i++)
    {
        if ( search == a[i])
        {
            printf ("Number found in %d possition",i+1);
            f=1;
            break;
        }
        
    }
    if (f==0)
        {
             printf ("Number not found");
         }
    getch();
    return 0;
}