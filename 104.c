#include <stdio.h>

int main(void) {
	char a[100];
	int len,i;
	scanf("%[^\t\n]s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(i==0)
		{
			a[i]=a[i]-32;
		}
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
		}
	}
	printf("%s",a);
	return 0;
}
