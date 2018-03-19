#include <stdio.h>
 
int main(void) {
	int a,b,c,d=0,i;
	scanf("%d%d%d",&a,&b,&c);
	for(i=0;i<b;i++)
	{
		a=a+c;
		d=d+a;
	}
	printf("%d",a);
	return 0;
}
