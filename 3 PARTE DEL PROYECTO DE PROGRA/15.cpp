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
int i;
for (i=0; i<N; ++i)
{
printf("\n  AMIGO: %s\t TELEFONO CEL: %s\t EDAD %d",amigos[i].nombre,
amigos[i].telefono,amigos[i].edad);
}
}
main()
{
agend();
getch();

printf("\n");
}

