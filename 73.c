#include<stdio.h>
int main(void)
{
int n,l,r,i,c=0;
scanf("%d\n%d\n%d\n",&l,&r,&n);
for(i=l+1;i<r;i++)
{
if(i==n)
{
c++;
}
}
if(c!=0)
{
	printf("the num is present");
}
else
{
	printf("the num is not present");
}

	return 0;
}
