#include <stdio.h>
int main (void)
{
int number,l,sum=0;
printf("Enter a number");
scanf("%d",&number);
for(l=1;l<=number;l++){
	sum=sum+l; }
	printf("\nThe answer is %d",sum);
}
