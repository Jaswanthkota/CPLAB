#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter a,b,c values");
scanf("%i%i%i",&a,&b,&c);
d=((a>b)&&(a>c))?printf("a is big"):(((b>a)&&(b>c))?printf("b is big"):printf("c is big"));
printf("%i%i",d,e);
}
