#include <stdio.h>
#include <conio.h>


int x;
double fact=1;

int factorial();
int factorial()
{
    printf("Escriba el número: ");
scanf("%i",&x);

while(x>1) fact*=x--;

printf("Factorial =%lf",fact);

}
main()
{
      factorial();
getch();
}

