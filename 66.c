#include<stdio.>
void main()
{
int i,n,c=0;
printf("enter the num");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==0)
{
printf("prime");
}
else
{
printf("not a prime");
}}
