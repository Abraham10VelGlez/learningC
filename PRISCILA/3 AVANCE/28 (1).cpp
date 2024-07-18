#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

int censa();
int censa()
{
	/*28) Un censador recopila ciertos datos aplicando encuestas para el último censo
  nacional de población y vivienda. Desea obtener de todas las personas que alcance
  a encuestar en un día, que porcentaje tiene de estudios de primaria, secundaria, 
  carrera técnica, estudios profesionales y estudios de posgrado.*/
  
  int ttp;
	printf("total de personas encuestadas: ");
	scanf("%d",&ttp);
	int s, pri, sec, cte, pro, pos;

	printf("total de personas con estudios de primaria: ");
	scanf("%d",&pri);
	
	system("cls");
	printf("total de personas con estudios de secundaria: ");
	scanf("%d",&sec);
	

	printf("total de personas con estudios de carrera tecnica: ");
	scanf("%d",&cte);
	
	system("cls");
	printf("total de personas con estudios profesionales: ");
	scanf("%d",&pro);
	
	system("cls");
	printf("total de personas con estudios de posgrado: ");
	scanf("%d",&pos);
	
	s=pri+sec+cte+pro+pos;
	
	if(s==ttp)
	{
		int ppri, psec, pcte, ppro, ppos;
	ppri=(pri*100)/ttp; 
	psec=(sec*100)/ttp;
	pcte=(cte*100)/ttp;
	ppro=(pro*100)/ttp;
	ppos=(pos*100)/ttp;
	
	system("cls");
	printf("Los porcentajes son:\n");
	printf("\n\nEstudios de primaria= %d",ppri);
	printf("\n\nEstudios de secundaria= %d",psec);
	printf("\n\nEstudios de carrera tecnica= %d",pcte);
	printf("\n\nEstudios profesionales= %d",ppro);
	printf("\n\nEstudios de posgrado= %d",ppos);
	}
}
main()
{
      censa();
      getch();
      }
      
