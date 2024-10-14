#include<stdio.h>
int main(void)
{
	int num1,num2,choice,result;
	printf("Enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	
	printf("      Enter your choice \n\n  1 - addition \n  2 - subtraction \n  3 - multiplication \n  4 - division");
	scanf("%d",&choice);
	
	if(choice==1){
		result=num1+num2;
		printf("The answer is %d",result);
	}else if(choice==2){
		result=num1-num2;
		printf("The answer is %d",result);
	}else if(choice==3){
		result=num1*num2;
		printf("The answer is %d",result);
	}else if(choice==4){
	    result=num1/num2;
	    printf("The answer is %d",result);
	}else{
	printf("Fool");
}
		
	}
