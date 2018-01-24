#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int count=0,i;
printf("enter the string");
scanf("%d[^\n],s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count++;
}
printf("no of given string is%d"count+1);
}
