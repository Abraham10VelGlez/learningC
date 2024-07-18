#include <stdio.h>
#include <conio.h>


int w;
double fact=1;

int factorial();
int factorial()
{
    printf("Escriba el numero:  ");
scanf("%i",&w);

while(w>1) fact*=w--;

printf("Factorial =%lf",fact);

}
main()
{
      factorial();
getch();
}

