#include <stdio.h>

int main(void) {
 int a,r;
 scanf("%d",&a);
 while(a!=0)
 {
 	r=a%10;
 	if(r%2==0||r==1)
 	printf("%d",r);
 }
 a=a/10;
	return 0;
}
