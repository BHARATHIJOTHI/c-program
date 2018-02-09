#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the num");
	scanf("%d",&n);
	for(i=n;i<n+10;i++)
	{
		if(i%10==0)
		{
			printf("%d",i);
		}
	}
}
