/*Crear un programa que lea un número e indique su valor en la 
sucesión de Fibonacci (llamarle Fibonacci). Esta sucesión calcula 
su valor de la siguiente manera. Sólo es válido para números positivos, 
si el número es un uno, la sucesión vale 1 si es dos, la sucesión vale 2. 
Para el resto la sucesión es la suma de la sucesión de los dos números 
anteriores. Es decir, para 7 el valor sería 
o que valga la sucesión de 6 más la sucesión de cinco.*/ 

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



