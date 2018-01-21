#include<stdio.h>
void main()
{
int a[100],i,j,n,c=0;
printf("enter the number ");
scanf("%d",&a);
printf("the limits  are");
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
printf("the sorted elements are%d",a[i]);
}
