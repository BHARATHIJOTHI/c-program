#include<stdio.h>
void main()
{
int a[100],i,j,c=0,n,b;
printf("enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
a[i]=a[j];
c=1;
}}}
b=(n+1)/2;
printf("enter the median element%d",b)
