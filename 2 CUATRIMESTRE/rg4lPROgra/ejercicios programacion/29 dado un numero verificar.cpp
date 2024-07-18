#include <stdio.h>
#include <conio.h>
int main ()
{
 int numero;
 printf("Inserte num. de dos digitos pares: ");
 scanf("%d",&numero);
 int aux=numero;
 if(numero<100 && numero>9)
 {
  int d1=numero%10;
  numero=numero/10;
  int d2=numero%10;
  if(d1%2==0 & d2%2==0)
   printf("El promedio d los digitos de %d es: %d",aux,(d1+d2)/2);
 }
 else
  printf("\aERROR: el numero no tiene dos digitos");
 getch();
}
