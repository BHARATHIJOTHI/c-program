#include <stdio.h>
 
int main(void) {
	int a,exp,p=1,i;
	scanf("%d%d",&a,&exp);
	for(i=1;i<=exp;i++)
	{
		p=p*a;
	}
	printf("%d",p);
	return 0;
}
