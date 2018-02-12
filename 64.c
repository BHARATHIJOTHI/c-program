#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,w=1,len;
scanf("%s",&a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]==' ')
{
w=w+1;
}}
printf("%d",w);
}
