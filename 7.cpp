#include <stdio.h>
#include <conio.h> 

int main(){
int x,y,z;

printf ("Escribe el primer lado");
scanf("%i",&x);
printf ("\nEscribe el segundo lado");
scanf("%i",&y);
printf ("\nEscribe el tercer lado");
scanf("%i",&z);

printf("\n\n\n"); //Saltar tres líneas

/*Comprobación de si es un tiángulo, 
damos por hecho que los números son positivos */
if ((x+y>z) && (x+z>y) && (y+z)>x){
if (x==y && x==z) printf ("Equilatero"); 
else if (x==y || x==z || y==z) printf ("Isosceles"); 
else printf("Escaleno");
}
else
printf("Esos números no forman un triángulo");
getch();
}
