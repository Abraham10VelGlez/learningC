/*27.	Un jefe de casilla desea determinar cuántas personas de 
cada una de las secciones que componen su zona asisten el día 
de las votaciones. Las secciones son: norte, sur y centro.
También desea determinar cuál es la sección con mayor número 
de votantes.*/


#include <stdio.h>
#include <conio.h>
#include <math.h>

int opcs,tp;
int c,sn=0,ss=0,sc=0;
int cen();
int cen()
{
	
	printf("\t 27 \n  Un jefe de casilla desea determinar cuántas personas de cada una de las\n secciones que componen su zona asisten el día de las votaciones. Las\n secciones son: norte, sur y centro.\n También desea determinar cuál es la sección con mayor número de\nvotantes.\n\n "); 
	printf("\n Cantidad de personas en  su zona? ");
	scanf("%d",&tp);
	

	for(c=0;c<tp;c++)
	{
	printf("\n De que seccion eres?\n\n1)Norte.\n\n2)Sur.\n\n3)Centro.\n\nSu seccion es: ");
	scanf("%d",&opcs);
	if(opcs==1)
	sn++;
	if(opcs==2)
	ss++;
	if(opcs==3)
	sc++;
	}
	
	if(sn>ss && sn>sc)
	{
	printf("De un total de %d personas que componen su zona, las personas que asistieron de cada seccion son:",tp);
	printf("\n\nNorte= %d\n\nSur= %d\n\nCentro= %d",sn,ss,sc);
	printf("\n\nLa seccion con mas personas es Norte.");
	}
	if(ss>sn && ss>sc)
	{
	
	printf("De un total de %d personas que componen su zona, las personas que asistieron de cada seccion son:",tp);
	printf("\n\nNorte= %d\n\nSur= %d\n\nCentro= %d",sn,ss,sc);
	printf("\n\nLa seccion con mas personas es Sur.");
	}
	if(sc>ss && sc>sn)
	{
	
	printf("De un total de %d personas que componen su zona, las personas que asistieron de cada seccion son:",tp);
	printf("\n\nNorte= %d\n\nSur= %d\n\nCentro= %d",sn,ss,sc);
	printf("\n\nLa seccion con mas personas es Centro.");
	}
}

main ()
{

cen();
getch();
}

