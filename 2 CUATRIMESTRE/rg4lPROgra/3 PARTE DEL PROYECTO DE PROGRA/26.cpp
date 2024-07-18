/*26.	Escriba un programa que  inicialice un  vector de enteros (15). 
Calcule e imprima su suma, media, mínimo y máximo.*/

#include <stdio.h>
#include <conio.h>

int c,max=0,min,suma=0;
float prr;
int vector[15];
int ve();
int ve()
	
{
	printf ("\n\n MUESTRA UN PROGRAMA QUE INCIALIZA UN VECTOR\n DE ENTEROS (15)CALCULE E IMPRIMA SU SUMA, MEDIA, MAXIMO,MINIMO");
	

	for(c=0;c<15;c++)
	{
		printf("\n\n\n Escriba el dato %d para el vector:\n\n ",c);
		scanf("%d",&vector[c]);
		suma+=vector[c];
	}
	
	for(c=0; c<15; c++) 
	{
		if(vector[c]>max)
		{
			max=vector[c];
		}
	}
	
	for(c=0; c<15; c++)
	{
		if(vector[c]<min)
		{
			min=vector[c];
		}
	}
	
	for(c=0;c<15;c++)

	{
		printf(" %d",vector[c]);
	
    }
	prr=suma/15;
	printf("\n\nLa suma es= %d \n\nLa media es= %.2f\n\nEl maximo es= %d \n\nEl mimimo es= %d",suma,prr,max,min);
}

main ()
{
ve();
getch();	
}







