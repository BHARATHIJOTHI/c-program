#include<stdio.h>
void main()
{
int n,c=0;
scanf("%d",&n);
if(n%13==0)
{
c=1;
}
if(c==1)
{
printf("multiple of 13");
}
else
{
printf("not a multiple of 13");
}
}
