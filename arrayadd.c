#include <stdio.h>
#include <conio.h>
    int main (void){
        int a[10],i,sum=0,limit;
        printf ("Enter limit\n");
        scanf ("%d",&limit);
        if (limit > 10){
            printf (" Sorry this much limit not available");
        }else {
        printf("Enter values \n");
        for ( i = 0; i < limit; i++)
        {
            scanf ("%d",&a[i]);
        }
        for ( i=0;i<limit;i++) {
            sum = sum + a[i];
        }
        printf ("sum  is : %d",sum);
        }
        getch();
        return 0;
}