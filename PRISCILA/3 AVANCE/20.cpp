#include <stdio.h>
#include <conio.h>

int nr,fac,nro;
int factor(int nro);
int factor(int nro) 
{ 
if(nro<2) 
  return 1; 
else 
  return nro*factor(nro-1); 
}

main() 
{ 
       
printf("Introduce un numero:"); 
scanf("%d",&nr); 
fac=factor(nr); 
printf("El factorial de %d es %d\n", nr, fac); 
getch();
} 
