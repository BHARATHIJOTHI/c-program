#include <stdio.h>

int main(void) {
	int n,s=0,i,a;
	printf("enter the no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	a=s/n;
	printf("avg is %d",a);
	return 0;
}
