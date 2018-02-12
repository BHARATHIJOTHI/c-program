#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i;
printf("enter the string");
scanf("%s",&a);
strcpy(b,a);
strrev(a);
i=strcmp(a,b);
if(i==0)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
