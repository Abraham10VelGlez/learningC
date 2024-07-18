#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num,contador=1;
    printf("Introduce un numero: ");
	scanf("%i",&num);
while(num/10 !=0){
    num=num/10;
    contador++;
}
printf("Digitos: %i",contador);
getch();
return 0;

}
