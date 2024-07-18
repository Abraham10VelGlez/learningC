#include<stdio.h>
#include<conio.h>

main()

{

int num1,num2,num3;


printf("inresa la base");
scanf("%d",&num1);


printf("inresa el lado derecho");
scanf("%d",&num2);


printf("inresa lado isquierdo");
scanf("%d",&num3);


if(num1==num2&&num2==num3)
{
	printf("el triangulo es equilatero");
}else

if(num1==num2|num1==num3|num2==num3)
{

printf("lado de isoseles");
}else
printf("el triangulo es escaleno");


getch();
}
