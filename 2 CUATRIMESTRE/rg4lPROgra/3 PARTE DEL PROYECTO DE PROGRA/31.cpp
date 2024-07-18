#include <stdio.h>
#include <conio.h>


int inver();
int inver()
{
	
	int c,n,a,d,f,mn;
	 printf ("DADO EL TAMAÑO DEL VECTOR T DE TAMAÑO N. SI EL VECTOR ES PAR\n INVERTIR LO ELEMENTOS DE LA MITAD DE LOS ELEMENTOS   \nEjemplo: v=[1][2][3][4][5][6] \n v(invertido)=[3][2][1][6][5][4]\n"); 
	printf("\n\n\n Dimencion de tu vector: \n");
	scanf("%d",&n);
	int aux[n];
	int vector[n];
	a=n;
	for(c=0;c<n;c++)
	{
		printf("Ingresa el dato %d del vector: ",c);
		scanf("%d",&vector[c]);
	}
	
	if(n%2==0)
	{
		mn=n/2;
		for(a=0,d=mn-1;a<mn,d>=0;d--,a++)
		{
			aux[a]=vector[d];
		}
		
		for(a=mn,d=n-1;a<n,d>=mn;d--,a++)
		{
			aux[a]=vector[d];
		}
		
		printf("\n\nVector Nomal.\n\n");
		
		for(c=0;c<n;c++)
		{
			printf(" %d",vector[c]);
		}
		
		printf("\n\nVector Invertido\n\n");
		
		for(c=0;c<n;c++)
		{		
			printf(" %d",aux[c]);
		}
	}
	else
	{
		printf("\n\nVector Nomal.\n\n");
		for(c=0;c<n;c++)
		{
			printf(" %d",vector[c]);
		}
	}
}
main ()
	{
 inver();
 getch();
}

	
