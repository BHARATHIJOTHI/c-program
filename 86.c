#include <stdio.h>

int main(void) {
	char a[50];
	int len,i,j,c=0;
	scanf("%d",&a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
	}
	if(c==0)
	{
		printf("it is isogram");
	}
	else
	{
		printf("it is not a isogram");
	}
	return 0;
	
}








