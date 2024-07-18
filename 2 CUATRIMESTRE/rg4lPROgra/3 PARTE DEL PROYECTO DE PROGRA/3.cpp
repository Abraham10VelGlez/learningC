
/*Programa que pide 10 números y calcula y  muestra la 
suma de todos los que fueron pares*/
#include<stdio.h>
#include<conio.h>

int sum(int nu1,int nu2,int nu3,int nu4,int nu5,int nu6,int nu7,int nu8,int nu9,int nu10);
int sum(int nu1,int nu2,int nu3,int nu4,int nu5,int nu6,int nu7,int nu8,int nu9,int nu10)

{

	int sum;
    int su,numero;
	
	if(numero=nu2,nu4,nu6,nu8,nu10)
	{
	su=nu2+nu4+nu6+nu8+nu10;
	
	printf("\n\nLA SUMA DE LOS NUMEROS PARES ES:%d\n\n",su);
	 	
	}
	}

main()
{
	
int nu1,nu2,nu3,nu4,nu5,nu6,nu7,nu8,nu9,nu10;	

	printf("introduce los 10 numeros\n");
	 
	
printf("introduce el primer numero:");
scanf("%d",&nu1);
printf("introduce el segundo numero:");
scanf("%d",&nu2);
printf("introduce el tercer numero:");
scanf("%d",&nu3);
printf("introduce el cuarto numero:");
scanf("%d",&nu4);
printf("introduce el quinto numero:");
scanf("%d",&nu5);
printf("introduce el sexto numero:");
scanf("%d",&nu6);
printf("introduce el septimo numero:");
scanf("%d",&nu7);
printf("introduce el octavo numero:");
scanf("%d",&nu8);
printf("introduce el noveno numero:");
scanf("%d",&nu9);
printf("introduce el decimo numero:");
scanf("%d",&nu10);

printf("\n\t\tGRACIAS POR SU ATENCION ");


sum (nu1,nu2,nu3,nu4,nu5,nu6,nu7,nu8,nu9,nu10);
getch();

}

