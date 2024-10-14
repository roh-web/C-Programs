#include <stdio.h>
#include <conio.h>
int main (void)
{ 
    int i,prod,five=5;
    for ( i = 1; i <= 10; i++)
    {
        prod=i*five;
        printf (" %d * %d = %d \n",i,five,prod);
    }
    getch();
    return 0;

    /* success */
    
}
  