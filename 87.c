#include <stdio.h>
 
int main(void) {
   int a,b,c;
   scanf("%d%d",&a,&b);
   c=gcd(a,b);
   printf("%d",c);
	return 0;
}
int gcd(int m,int n)
{
	if(m==0)
	return n;
	if(n==0)
	return m;
	else
	gcd(n,m%n);
}
