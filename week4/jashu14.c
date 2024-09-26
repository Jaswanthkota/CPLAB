#include<stdio.h>
int main()
{
int a,b,c,d,e,s;
float avg;
printf("enter a,b,c,d,e values");
scanf("%i%i%i%i%i",&a,&b,&c,&d,&e);
s=a+b+c+d+e;
avg=(float)(s/5);
printf("%i%f",s,avg);
}
