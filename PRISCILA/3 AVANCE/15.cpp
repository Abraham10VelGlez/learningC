#include <stdio.h>
#include <conio.h> 
#define N 3

int agend();
int agend()
{
  struct agenda
{
char nombre[25];
char telefono[10];
int edad;
};
struct agenda
amigos[N]={{"Daniel","235476980",18},{"Felipe","214312650",18},{"Laura","458765909",18}};
int ii;
for (ii=0; ii<N; ++ii)
{
printf("\n  AMIGO: %s\t TELEFONO CEL: %s\t EDAD %d",amigos[ii].nombre,
amigos[ii].telefono,amigos[ii].edad);
}
}
main()
{
agend();
getch();

printf("\n");
}

