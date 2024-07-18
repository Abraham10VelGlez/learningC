#include <stdio.h>
#include <conio.h>

int e,mayor=0;

int num_may();
int num_may()
{

do
{
printf("\nDar Numero: ");
scanf("%i",&e);
if (mayor<e) mayor=e;
}
while (e!=0);

printf("\nEl mayor es: %i",mayor);
}
main()
{
      num_may();
getch();
}
