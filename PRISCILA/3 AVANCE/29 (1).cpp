/*29.	Dado un numero verificar:
    - Que tenga dos dígito
    - Verificar si sus dígitos son pares
    - Promediar sus dígitos*/


#include <stdio.h>
#include <conio.h>
 int numero;
 int un();
 int un()
{
printf("EL PROGRAMA VERIFICA QUE DADO UN\n NUMERO TENGA DOS DIGITOS, SI SON PARES Y PROMEDIA");     
 printf("\n\nInserte num. de dos digitos pares: ");
 scanf("%d",&numero);
 int aux=numero;
 if(numero<10 && numero>9)
 {
  int d1=numero%10;
  numero=numero/10;
  int d2=numero%10;
  if(d1%2==0 && d2%2==0)
   printf("\n\nEl promedio de los digitos de %d es: %d",aux,(d1+d2)/2);
 }
 else
  printf("\aERROR: el numero no tiene dos digitos");
 getch();
}

 main ()
{
un();	
getch();	
}

