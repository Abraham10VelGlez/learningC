/*Crear un programa que lea un n�mero e indique su valor en la 
sucesi�n de Fibonacci (llamarle Fibonacci). Esta sucesi�n calcula 
su valor de la siguiente manera. S�lo es v�lido para n�meros positivos, 
si el n�mero es un uno, la sucesi�n vale 1 si es dos, la sucesi�n vale 2. 
Para el resto la sucesi�n es la suma de la sucesi�n de los dos n�meros 
anteriores. Es decir, para 7 el valor ser�a 
o que valga la sucesi�n de 6 m�s la sucesi�n de cinco.*/ 

#include <stdio.h>
#include<conio.h> 

int f1=1,f2=1;
int n,cont;
double res=1; 
int fibonaci();
int fibonaci()
{
printf("\n\nCREAR UN PROGRAMA QUE LEA E INDIQUE SU VALOR EN LA SUCECION FIBONACI");
printf("\n\n\t\t**FIBONACI**\n\n\t\t");

do{
printf("Escriba el numero: ");
scanf("%d",&n);

if(n<=0) 

printf("Numero no valido\n");
}while(n<=0);

for(cont=3;cont<=n;cont++)
{
res=f1+f2;
f1=f2;
f2=res;
}

printf("\n\t\tResultado: %.0f",res);

}

main()
{
fibonaci();
getch();	
}



