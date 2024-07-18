#include <stdio.h>
#include <conio.h>

char n[100]; 

int digito();
int digito()
{
     int numer,contador=1;
    printf("Introduce un numero: ");
	scanf("%i",&numer);
while(numer/10 !=0)
{
    numer=numer/10;
    contador++;
}
printf("Digitos: %i",contador);
}
main()
{
      digito();
getch(); 

}
