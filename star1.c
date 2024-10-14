#include <stdio.h>
int main (void)
{
	int row,i,j;
printf("Enter rows to print\n");
scanf("%d",&row);
for ( i=row;i<=0;i--)
{
for (j=0;j<i;j++)
{
	printf("* ");
	
}
printf("\n");
}

printf("!SOMETHNG WRONG HAPPENED!");
return 0;
}
