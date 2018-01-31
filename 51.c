#include<stdio.h>
int main()
{
int b;
scanf("%d",&b);
int d=b;
int s=0,t,m;
while(b!=0)
{
s=s*10;
s=s+b%10;
b=b/10;
}
while(s!=0)
{
t=s%10;
s=s/10;
printf("\t%d",t);
}
return 0;
}
