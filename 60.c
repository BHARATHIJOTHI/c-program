#include<stdio.h>
void main()
{
int f=0,s=1,n l,i;
printf("enter the l");
scanf("%d",&l);
printf("%d%d",f,s);
for(i=2;i<l;i++)
{n=f+s;
f=s;
s=n;
printf("%d",n);
}}
