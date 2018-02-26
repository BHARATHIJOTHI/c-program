#include <stdio.h>

int main(void) {
    int a,b,c,d,n,i;
    printf("enter the limit");
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%d%d",&a,&b);
    	scanf("%d%d",&c,&d);
    	printf("%d\n",(a/b));
    	printf("%d\n",(c%d));
    }
    
	return 0;
}
