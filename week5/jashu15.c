#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter a,b,c,d values");
scanf("%i%i%i%i",&a,&b,&c,&d);
if((a>b)&&(a>c)&&(a>d))
printf("a is big");
else if((b>a)&&(b>c)&&(b>d))
printf("b is big");
else if((c>a)&&(c>b)&&(c>d))
printf("c is big");
else
printf(" d is big");
}
