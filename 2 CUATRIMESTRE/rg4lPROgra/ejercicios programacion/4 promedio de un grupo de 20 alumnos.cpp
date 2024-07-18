#include<stdio.h>
#include<conio.h>

main()
{
int vecx[20],n,vecy[20],suma=0,prom;
	printf ("ingresa la 20 calificacioes:\n ");
	for(n=1;n<20;n++)
	{
    printf ("ingresa la %d, calificacion \t",n);
	scanf("%d",&vecx[n]);
	suma=suma+vecx[n];
	}
	prom=suma/20;
	printf("el promedio de las 20 calificacioes es %d:",prom);
getch();
}
