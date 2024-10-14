#include <stdio.h>
#include <conio.h>
int main (void)
{
    int i,j ;
    int mul1 [2] [2] , mul2 [2] [2], sum[2][2];
    //printf("Enter the size of arrays\n");
    //scanf ("%d",&size);
    printf ("Enter the values of array 1\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf ("%d",&mul1 [i][j]);
        }
    }

    printf ("Enter the values of array 2\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
           scanf ("%d",&mul2 [i][j]);
        }
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            sum[i][j]  = mul1[i][j] + mul2[i][j];
        }
        
    }
    printf("Sum of 2 arrays is :\n");
    for ( i = 0; i < 2; i++)
    {
        
        for ( j = 0; j < 2; j++)
        {
            printf ("%d   ",sum[i][j]);
        }
        printf("\n");
    }
    
}