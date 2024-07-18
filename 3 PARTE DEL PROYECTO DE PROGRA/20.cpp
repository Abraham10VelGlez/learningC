#include <stdio.h>
#include <conio.h>

int n,fac;
int factor(int num);
int factor(int num) 
{ 
if(num<2) 
  return 1; 
else 
  return num*factor(num-1); 
}

main() 
{ 
       
printf("Introduce un numero:"); 
scanf("%d",&n); 
fac=factor(n); 
printf("El factorial de %d es %d\n", n, fac); 
getch();
} 
