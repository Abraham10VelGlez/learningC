#include<conio.h>
#include<stdio.h>
#include <math.h>

 int circu();
int circu()
{
	/*24. Escriba un programa que imprima una tabla con las áreas del círculo y de
      la esfera para un radio en el rango de 0 hasta 20 en incrementos de 2.*/

	int r=0;
	float esf,circ,pi=3.141592654;
	while(r<=20)
	{
	circ=pi*pow(r,2);
	esf=(4*pi)*pow(r,2);
	printf("\n\nRadio= %d \tArea del Circulo= %f \tArea de la Esfera= %f",r,circ,esf);
	r+=2;
	}
}

void LimpiaPantalla(int n);
void LimpiaPantalla(int n)
{
while (n-- >0) putchar('\n');
}
main()
{
       int circu();
       getch();
       }
      
