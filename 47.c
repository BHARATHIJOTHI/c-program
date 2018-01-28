#include<stdio.h>
void main()
{
int n,i,b,s;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d",a[i]);
}
b=a[0];
for(i=0;i<n;i++)
{
if(b<a[i])
{
b=a[i];
}
}
printf("\n largest number%d",b);
}
s=a[0];
for(i=0;i<n;i++)
{
if(s>a[i])
{
s=a[i];
}
}
printf("the largest valuve is%d",s);
}
