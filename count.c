#include<stdio.h>
void main()
{
int v,c=0;
printf("enter the num");
scanf("%d",&v);
while(v>0)
{
v=v/10;
c=c+1;}
printf("sum of integer is%d",c);
}}
