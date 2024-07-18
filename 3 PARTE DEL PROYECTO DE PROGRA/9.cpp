#include <stdio.h>
#include <conio.h>

int i,mayor=0;

int num_may();
int num_may()
{

do{
printf("\nNúmero: ");
scanf("%i",&i);
if (mayor<i) mayor=i;
}while (i!=0);

printf("\nEl mayor es %i",mayor);
}
main()
{
      num_may();
getch();
}
