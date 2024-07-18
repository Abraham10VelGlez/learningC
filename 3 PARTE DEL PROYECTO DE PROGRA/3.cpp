
/*Programa que pide 10 números y calcula y  muestra la 
suma de todos los que fueron pares*/
#include<stdio.h>
#include<conio.h>

int sum(int num1,int num2,int num3,int num4,int num5,int num6,int num7,int num8,int num9,int num10);
int sum(int num1,int num2,int num3,int num4,int num5,int num6,int num7,int num8,int num9,int num10)

{

	int suma;
    int su,numero;
	
	printf("\n\n\n\nLA SUMA ES: ");
	
		suma=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
	
	printf("%d",suma);
	
	if(numero=num2,num4,num6,num8,num10)
	{
	su=num2+num4+num6+num8+num10;
	
	printf("\n\nLA SUMA DE LOS NUMEROS PARES ES:%d\n\n",su);
	 	
	}
	}

main()
{
	
int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;	
int d;
	printf("introduce los 10 numeros");
	 scanf("%d",&d);
	
printf("introduce el primer numero");
scanf("%d",&num1);
printf("introduce el segundo numero");
scanf("%d",&num2);
printf("introduce el tercer numero");
scanf("%d",&num3);
printf("introduce el cuarto numero");
scanf("%d",&num4);
printf("introduce el quinto numero");
scanf("%d",&num5);
printf("introduce el sexto numero");
scanf("%d",&num6);
printf("introduce el septimo numero");
scanf("%d",&num7);
printf("introduce el octavo numero");
scanf("%d",&num8);
printf("introduce el noveno numero");
scanf("%d",&num9);
printf("introduce el decimo numero");
scanf("%d",&num10);

printf("\n\t\tGRACIAS PR SU ATENCION");


sum (num1,num2,num3,num4,num5,num6,num7,num8,num9,num10);
getch();

}

