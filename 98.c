#include <stdio.h>

int main(void) {
	int a[10],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		
			if((a[i]+1)!=a[i+1])
			{
				
				printf("%d",a[i]+1);
				break;
			}
		
	}
	
	return 0;
}
