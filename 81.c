#include <stdio.h>

int main(void) {
	int a,b,c,i,n;
	printf("enter the limit\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		c=b-a;
		printf("%d\n",c);
	}
	
	return 0;
}
