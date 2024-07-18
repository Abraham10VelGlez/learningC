#include<stdio.h>
#include<conio.h>

int i, j, mult;

int tabla();
int tabla()
{

printf("LAS TABLAS DE 1 A 15 SON:\n");

for(i=1;i<=15;i++)
{
for(j=1;j<=15;j++)
{
mult=i*j;
printf(" \t%d*%d=%d\n",i,j,mult);
}
printf("\n\n");
}
}
main()
{
tabla();
getch();
}
