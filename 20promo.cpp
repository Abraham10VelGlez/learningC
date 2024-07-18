#include <stdio.h>
#include <conio.h>


int factor(int num) 
{ 
if(num<2) 
  return 1; 
else 
  return num*factor(num-1); 
}

main() 
{ 
int n,fac;

printf("Introduce un numero:"); 
scanf("%d",&n); 
fac=factor(n); 
printf("El factorial de %d es %d\n", n, fac); 
getch();
} 
