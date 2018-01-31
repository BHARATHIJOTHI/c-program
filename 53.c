#include<stdio.h>
#include<conio.h>
void main()
{
int num,s=0,b,a;
printf("enter the digit");
scanf("%d",&a);
a=num;
while(a!=0)
{
b=a%10;
sum=sum+b;
b=b/10;
}
printf("the sum of the digit is %d",sum);
return 0;

}
