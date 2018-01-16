#include<stdio.h>
void  main()
{
int n,s=0,d,a;
printf("enter the num");
scanf("%d",&n);
a=n;
while(a!=0)
{
d=a%10;
s=s+d*d*d;
a=a/10;
}
if(s==n)
printf("armstrong num");
else
printf("not armstrong num");
}
