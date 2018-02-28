#include <stdio.h>

int main(void) {
   int a,b,c,d;
   scanf("%d%d",&a,&b);
   c=gcd(a,b);
   d=(a*b)/c;
   printf("%d",d);
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
