#include <stdio.h>
#include<string.h>

int main(void) {
char a[10];
int len,i,halflength,halflen;
scanf("%s",&a);
len=strlen(a);
if(len%2!=0)
{
	halflength=len/2;
	for(i=0;i<len;i++)
	{
		a[halflength]='*';
	}
}
	else
	{
		halflength=len/2;
		halflen=halflength-1;
		for(i=0;i<len;i++)
		{
			a[halflength]='*';
			a[halflen]='*';
		}}
		printf("%s",a);
		return 0;
	
}
