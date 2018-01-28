#include <stdio.h>
void main()
{
	int j,d;
	char a[50]="quick",b[45]="leaner";
	j=strlen(a);
	d=strlen(b);
	if(j>d)
	{
		printf("%s",a);
	}
	else if(j<d)
	{
		printf("%s",b);
	}
	else
	{
		printf("%s",a);
	}
}
