#include<stdio.h>
int main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)
{
if(year%year==0)
printf("leap year",year);
else
printf('not leap year",year);
}
else
printf("is a leap year");
}
else
printf("not a leap year");
return 0;
}
