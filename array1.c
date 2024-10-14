#include <stdio.h>
#include <conio.h>
int main (void)
{
    int limit,i,num[30],sum;
    printf("Enter limit (upto 30 only) \n");
    scanf("%d",&limit);
    printf ("Enter numbers\n");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&num[i]);
    }
    sum=num[0];
  for ( i = 1; i < limit; i++)
  {
   if (sum<num[i])
   {
       sum=num[i];
   }
   
            }
      printf("\nGreatest Number is : %d",sum);
     printf("\n\n \t \t\tHopefully , See ya later!"); 
}
