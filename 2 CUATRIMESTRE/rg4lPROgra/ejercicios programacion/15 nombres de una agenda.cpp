#include <stdio.h>
#include<conio.h>
#define N 3
int nom,ed,num,res;
main()

{

struct agenda

{

char nombre[25];

char telefono[10];

int edad;

};

struct agenda

amigos[N]={{"toño","7225677456",18},{"luis","7226732146",19},{"marta","7224589000",21}};

int i;

for (i=0; i<N; ++i)

{


printf("\nAmigo %s\t telefono %s\t edad %d",amigos[i].nombre,amigos[i].telefono,amigos[i].edad);

}

printf("\n");
getch();
}


