#include<stdio.h>
void main()
{
    int a=0,s=1,n,limit,i;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("%d%d",a,s);
    for(i=2;i<=limit;i++)
    {
        n=a+s;
        a=s;
        s=n;
        printf("%d",n);
    }
}
