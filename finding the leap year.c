#include <stdio.h>
int main (void)
{
    int limit,i,values[100],searchkey,flag=0;

        printf("Enter limit");
    scanf("%d",&limit);
printf("Enter values");
for (i=0;i<limit;i++) {
    scanf("%d",&values[i]);
}
printf("Enter searchkey");
scanf("%d",&searchkey);
for (i=0;i<limit;i++) {
if(values[i]==searchkey)
{
flag=1;
}
}
if (flag==1) {
    printf("value was found");
}
else
    printf("Value was not found");

return 0;
}                    


