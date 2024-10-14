#include <stdio.h>
#include <conio.h>
int sum();
int main (void)
{
    int a;
a=sum();
printf("Result : %d",a);
}
int sum() {
    int a,b,s;
printf("Enter Numbers\n");
scanf("%d%d",&a,&b);
s=a+b;
return s;
}