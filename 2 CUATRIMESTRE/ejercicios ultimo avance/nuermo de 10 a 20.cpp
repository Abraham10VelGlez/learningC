#include<stdio.h>
#include<conio.h>



void bob()

{

int num;



printf("ingresa el numero ");
scanf("%d",&num);


if(num>=10&&num<=20)
{
	printf ("el numero es%d",num);
	printf("\n");
	printf("el numero esta en el rango de 10 y 20");
	
}else

printf("el numero es%d",num);
printf("\n");
printf("el numero no esta en el rango ");



}

int main()
{
	bob();
	
	getch();
}


