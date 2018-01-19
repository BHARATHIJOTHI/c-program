#include<stdio.h>
void main()
{
int n,d,i;
printf("enter the limit");
scanf("%d",&n);
printf("enter the divisor");
scanf("%d",&d);
for(i=0;i<n;i++)
{
if(i%d==0)
printf("%d",i);
}}
