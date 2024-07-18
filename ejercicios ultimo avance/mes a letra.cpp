#include<stdio.h>
#include<conio.h>

int dis,men,ano;

void bob()
	
	{
	
	printf("ingrese el dia");
	scanf("%d",&dis);
	
	printf("ingrese el mes");
	scanf("%d",&men);
	
	printf("ingrese el año");
	scanf("%d",&ano);
	
	if(men==1)
	{
		printf("enero");
	}
		if(men==2)
	{
		printf("febrero");
	}
		if(men==3)
	{
		printf("marzo");
	}
		if(men==4)
	{
		printf("abril");
	}
		if(men==5)
	{
		printf("mayo");
	}
		if(men==6)
	{
		printf("junio");
	}
		if(men==7)
	{
		printf("julio");
	}
		if(men==8)
	{
		printf("agosto");
	}
		if(men==9)
	{
		printf("septiembre");
	}
		if(men==10)
	{
		printf("octubre");
	}
		if(men==11)
	{
		printf("novienmbre");
	}
		if(men==12)
	{
		printf("diciembre");
	}
	printf("\t")       ;printf("%d",dis);
	printf("%d\t");
	printf("%d",ano);
}
int main()
{

	
	bob();
		getch();
}	






