#include <stdio.h>
#include <conio.h>

int main(){
int i,mayor=0;

do{
printf("\nN�mero: ");
scanf("%i",&i);
if (mayor<i) mayor=i;
}while (i!=0);

printf("\nEl mayor es %i",mayor);
getch();
}
