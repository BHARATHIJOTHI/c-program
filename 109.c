#include <stdio.h>

int main(void) {
	int a[100];
	int i,j,n,min;
	min=a[0];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]<min)
		{
		min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
