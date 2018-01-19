#include<stdio.h>
void main()
{
int a,b,i,flag;
printf("enter the num");
scanf("%d%d",&a,&b);
for(i=a+1;i<b,i++)
{
flag=checkprimenumber(i);
if(flag==1)
printf("%d",i);
}
return 0;
}
int checkprimenumber(int n)
{
int j,flag=1;
for(j=2;j<=n/2;j++)
{
if(n%j==0)
{
flag=0;
break;
}}
return flag;
}
