#include <stdio.h>

int main(void) {
	int a[10],b[10],c,d,i,j,e=0;
	scanf("%s%s",a,b);
	scanf("%d%d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			if(a[i]==b[j])
			{
				e++;
			}
		}
	}
	if(c>0)
	{
		printf("exist");
		
	}
	else
	{
		printf("not exist");
	}
	return 0;
}
