#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int len,i;
printf("enter the string");
scanf("%s",&a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
printf("vowel");
}
else
{
printf("not vowel");
}}}
