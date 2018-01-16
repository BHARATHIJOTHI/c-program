#include<stdio.h>
int factorial(int);
void  main()
{
int a,f;
printf("enter the value");
scanf("%d",&a);
f=factorial(a);
printf("factoril  is%d",f);
}
int factorial(int n)
{
if(n==0)
return  1;
else
return  n*factorial(n-1);
}
