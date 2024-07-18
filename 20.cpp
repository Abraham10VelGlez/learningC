#include <stdio.h> 
#include <stdlib.h> 
float factorial(int n); /*prototipo de funcion*/ 
int main( ) 
{ int i,n; 
 do 
 { system("cls"); 
 printf("Introduce un nº positivo (maximo 25): "); 
 scanf("%d",&n); 
 }while (n<1 || n>25); 
 
 for(i=1; i<=n; i++) 
 { printf("%d! = ",i); 
 printf("%.0f \n",factorial(i)); /* Llamada a la función */ 
 } 
 system("pause"); 
 return 0; 
} 
 
float factorial(int n) /* dado un numero n devuelve su factorial */ 
{ int i; 
 float fact=1; 
 for(i=1; i<=n; i++) 
 fact=fact*i; 
 return fact; 
} 
