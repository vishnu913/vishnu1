#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
if(x%100==0)
{
if(x%400==0)
printf("yes");
else
printf("no");
}
else
{
if(x%4==0)
printf("yes");
else
printf("no");
}
}
