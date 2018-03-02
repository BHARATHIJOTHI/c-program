#include <stdio.h>

int main(void) {
	int n,b,i,sum=0;
	printf("enter the n value\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		sum=sum+b;
	}printf("%d",sum);
	return 0;
}
