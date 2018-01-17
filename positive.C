#include<stdio.h>
void main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
if(num>0)
printf("%d is a positive",num);
else if(num<0)
printf("%d is negative",num);
else
ptintf("0 is neither positive nor negative");
}
