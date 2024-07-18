#include <stdio.h>
#include <stdlib.h>
#define ANCHO 77

#define FILAS 4
#define ANCHO 77

void linea();

void lados();

void linea2();

void lados2();

main()

{

printf("\n\n\n\n");

linea();

lados();

linea2();

lados2();

printf(" *\t\t\t\t Bienvenido a C \t\t\t\t*\n");

lados();

linea();

printf("\n\n\n\n");

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

}

void linea2()

{

int x;

printf(" ");

for (x=0; x<=ANCHO; ++x) putchar('*');

putchar('\n');

}

void lados2()

{

int y;

for (y=0; y<=FILAS; ++y) printf(" *\t\t\t\t\t\t\t\t\t\t*\n");

system("pause");
}

