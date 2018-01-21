#include<stdio.h>
void main()
{
int i,j,a[100],n,c=0;
printf("enter the numbers");
scanf("%d",&a);
printf("the numbers are%d",a);
for(i=0;i<a;i++)
{
scanf("%d",&a[i]);
}
j=a[0];
for(i=1;i<a;i++)
{
if(a[i]<j)
{
j=a[i];
c=1;
}}
printf("the min element is %d",j);
}
