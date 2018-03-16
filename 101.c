#include <stdio.h>
#include<string.h>

int main(void) {
	char a[50];
	int n,len,i;
	scanf("%s",a);
	scanf("%d",&n);
	len=strlen(a);
	for(i=(len-n);i<=len;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
