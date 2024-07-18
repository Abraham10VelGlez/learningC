
#include<stdio.h>
#include<conio.h>

main()
{

int prom,suma=0,vec[20],x;



for(x=0;x<20;x++)
{

printf("ingresa la calificacion");
scanf("%d%",&vec[x]);

}

for(x=0;x<20;x++)
{
	suma=suma+vec[x];
	
}


prom=(suma/20);

printf("el promedio es%d",prom);
getch();

}
