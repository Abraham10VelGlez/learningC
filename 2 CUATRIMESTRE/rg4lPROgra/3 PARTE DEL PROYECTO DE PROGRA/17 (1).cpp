//17.-Escriba un programa que halle el menor de dos números pedidos al usuario.
#include <stdio.h>
#include <conio.h>
int menor, numero1, numero2;
int dos();
int dos()
{
printf("\nESCRIBA UN PRORAMA QUE HALLE EL MENOR DE DOS NUM,EROS PEDIDOS AL USUARIO");
 
printf("\n\nDigita numero: ");
scanf("%d",&numero1);
printf("\n\nDigita segundo numero: ");
scanf("%d",&numero2);
if (numero1 < numero2) 
menor=numero1;
else 
menor=numero2;

printf("\nEl menor de entre el %d y el  %d es\t *** %d ***\n",numero1, numero2, menor);
}

main()
{
dos();	
getch();	
}


