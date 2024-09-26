#include<stdio.h>
int main()
{
int j,i;
printf("enter j,i values");
scanf("%i%i",&i,&j);
j=(i++) + (++i);
printf("%i%i",i,j);
}
