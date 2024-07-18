#include<stdio.h>
#include<conio.h>


void bob()
{
	
	int num;
	
	printf("ingresa el numero entero putote");
	scanf("%d",&num);
	
	
	if(num/2&&num<5&&num<1)
{

	printf("el numero es de una sifras");
	
}	else	
	
	
	if(num/2&&num>5&&num<50)
{

	printf("el numero es de dos sifras");
	
}	else


	if(num/2&&num>50&&num<500)
{

	printf("el numero es de tres sifras");
	}else
	
		if(num/2&&num>500)
{

	printf("el numero es de cuatro sifras");
	}
	
	
	
}

int main()
{
	bob();
	getch();
	
	
	
}
