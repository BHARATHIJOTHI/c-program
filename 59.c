#include <stdio.h>

int main() {
	int a[10],max,i;
	printf("enter the num");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	a[0]=max;
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",a[0]);
	return 0;
}

