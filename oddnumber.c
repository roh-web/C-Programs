#include <stdio.h> 
#include <conio.h>
int main (void)
{
    int limit,i,result=0;
    printf (" Enter a number as the limit");
    scanf (" %d",&limit);
    for ( i = 1; i < limit; i++)
    {
        if ( i % 2 != 0) {
            result = i + result;
    }
    }
    printf (" Result=%d", result);
        return 0;
}