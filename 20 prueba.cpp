#include <stdio.h>
#include <conio.h>

int nr,fac,nro;
int factor(int nro);
int factor(int nro) 
{ 
           
printf("Introduce un numero:"); 
scanf("%d",&nr); 

 
if(nro<2) 
  return 1; 
else 
  return nro*factor(nro-1); 
  printf("El factorial de %d es %d\n", nr, fac);
}

main() 
{ 
 factor(nro);
getch();
} 
