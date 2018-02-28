#include <stdio.h>
#include<string.h>
void main()
{
	char b[50];
	int l,i;
	printf("\n enter the string\t");
	scanf("%s",b);
	l=strlen(b);
	for(i=0;i<l;i++)
	{
	if((i%2)==0)
	{
		printf("%c",b[i]);
	}
	}
	printf("\t");
	for(i=0;i<l;i++)
	{
	if((i%2)!=0)
	{
		printf("%c",b[i]);
	}
	}
}
