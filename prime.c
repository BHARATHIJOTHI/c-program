#include<stdio.h>
void  main()
{
int n,i,c=0;
printf("enter the num");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
c++;
}
if(c==0)
printf("prime num");
else
printf("not prime num");
}
