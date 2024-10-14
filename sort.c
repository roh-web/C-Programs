#include <stdio.h>
#include <conio.h>
int main (void) {
    int a[101],i,j,limit=0,swap=0;
    printf ("Enter limit");
    scanf("%d",&limit);
    printf ("Enter values");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
        for (i=0;i<limit;i++) {
            for ( j = 0; j < limit-1; j++)
            {
                if (a[i] < a[j])
                {
                    swap=a[i];
                    a[i]=a[j];
                    a[j]=swap;
                }
                
            }
        }
        printf ("Result after swapping : ");
        for ( i = 0; i < limit; i++)
    {
            printf ("%d  ",a[i]);
        }
        getch();
        return 0;
}