#include<stdio.h>
#include<conio.h>

int nun;

int rango();
int rango()

{

printf("ingresa el numero: ");
scanf("%d",&nun);


if(nun>=10&&nun<=20)
{
	printf ("el numero es: %d",nun);
	printf("\n");
	printf("el numero esta en el rango de 10 y 20");
	
}
else


printf("el numero no esta en el rango de 10 y 20 ");
}

main()
{
	rango();
	
	getch();
}


