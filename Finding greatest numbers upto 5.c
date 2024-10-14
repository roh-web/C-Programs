#include <stdio.h>
int main (void)
{
	int a;
	printf("enter the digit for the greatest number");
	scanf("%d",&a);
	if(a==1){
		printf("The greatest number is 9");
	}
	
	if(a==2)
	{
		printf("The greatest number is 99");
	}
	if(a==3) {
		printf("The greatest number is 999");
	}
	
	if(a==4){
		printf("The greatest number is 9999");
	}
	
	if(a==5){
		printf("The greatest number is 99999");
	}
	if(a>5){ printf("you can only enter upto 5"); 
}
}
