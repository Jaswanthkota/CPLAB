#include<stdio.h>
int main()
{
int a,b,c,d;
float x;
printf("enter a,b,c,d values");
scanf("%i%i%i%i",&a,&b,&c,&d);
x=(float)(a/b*c-b+a*d/3);
printf("%f",x);
}
