#include <stdio.h>
#include <conio.h>


int numero;char n[100]; 

int digito();
int digito()
{
     int num,contador=1;
    printf("Introduce un numero: ");
	scanf("%i",&num);
while(num/10 !=0)
{
    num=num/10;
    contador++;
}
printf("Digitos: %i",contador);
}
main()
{
      digito();
getch(); 
return 0;
}
