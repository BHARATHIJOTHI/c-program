#include<stdio.h>
void main()
{
float amt,rate,time,interest;
scanf("%f%f%f",amt,&rate,&time);
interest=(amt*rate*time)/100;
printf("%f",interest);
}
