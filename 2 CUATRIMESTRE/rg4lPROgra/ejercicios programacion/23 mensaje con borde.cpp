#include <stdio.h>
#include<conio.h>
#define ANCHO 77

#define FILAS 4

void linea();

void lados();

main()

{
printf("pulsa la flechita hacia abajo");
printf("\n\n\n\n");

linea();

lados();

printf(" *\t\t\t\t bienvenido soy alejandro \t\t\t\t*\n");

lados();

linea();

printf("\n\n\n\n");
getch();
}

void linea()

{

int x;

printf(" ");

for (x=0; x<=ANCHO; ++x) putchar('*');

putchar('\n');

}

void lados()

{

int y;

for (y=0; y<=FILAS; ++y) printf(" *\t\t\t\t\t\t\t\t\t\t*\n");
getch();
}
