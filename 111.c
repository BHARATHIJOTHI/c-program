#include <stdio.h>
 
int main(void) {
	int a,r,c=0;
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		c=c+1;
		a=a/10;
	}
	printf("%d",c);
	return 0;
}
