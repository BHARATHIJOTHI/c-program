#include <stdio.h>

int main(void) {
    int a[50],i,b,n;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    printf("%d",a[b]);
	return 0;
}
