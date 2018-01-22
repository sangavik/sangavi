#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the value of a%d",&a);
scanf("%d",&a);
if(a%2==0)
{
printf("the num is even");
else
printf("the num is odd");
}
getch();
}
